#include "ScDisplay.h"


ScDisplay::ScDisplay(){
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
    printf("Could not init!\n");
  }
  mPalette = new Sc2kPalette("sc2k.pal");
}

ScDisplay::~ScDisplay(){
  SDL_FreeSurface(mDisplay);
  SDL_FreeSurface(mImage);
  SDL_Quit();
}

int ScDisplay::initGraph(int pWidth, int pHeight){
  int c;
  unsigned int *ptr;
 
  mWidth = pWidth;
  mHeight = pHeight;
  if((mDisplay = SDL_SetVideoMode(pWidth, pHeight, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
    printf("Could not make display buffer\n");
    return -1;
  }
  if((mImage = SDL_CreateRGBSurface(SDL_SWSURFACE, pHeight, pWidth, 32,0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000))== NULL){
    ptr = (unsigned int*) mImage->pixels;
    for(c = 0; c < (mWidth * mHeight); c++){
      ptr[c] = 0x00FFFFFF; 
    }
    printf("Could not make image buffer\n");
    return -1;
  }
  //  SDL_SetColorKey(mImage, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(mImage->format, 255, 1, 255));
  return 0;
}

void ScDisplay::setPixel(int pX, int pY, unsigned int pColor){
  unsigned int *px;
  int idx;
  px =(unsigned int*)mImage->pixels;
  idx = (pY * mWidth) + pX;
  px[idx] = pColor;
}

void ScDisplay::display(ShapHeader *pSh){
  SDL_Rect dst;
  SDL_Surface *stmp;
  int c;
  unsigned int *ptr;
  ptr = (unsigned int*) mImage->pixels;
  for(c = 0; c < (mWidth * mHeight); c++){
    ptr[c] = 0x00FFFFFF;
  }
  process(pSh);
  dst.x = 0;
  dst.y = 0;
  stmp = SDL_DisplayFormat(mImage);
  SDL_BlitSurface(stmp, NULL, mDisplay, &dst);
  SDL_FreeSurface(stmp);
  SDL_Flip(mDisplay);
}


int ScDisplay::process(ShapHeader *pSh){
  unsigned char *pl;
  int idx;
  int linenum;
  int llen;
  int xpos;
  int off;
  int pixels;
  int px;
  pl = &(pSh->index[18]);
  idx = 0;

  for(linenum = 0; linenum < pSh->height; linenum++){
    xpos = 0;
    if(pl[idx+1] != 0x01){
      if(pl[idx+1] == 0x2 && pl[idx] == 0){
        printf("WEIRD\n");
      }else{
        printf("line increment expected!\n");
        return -1;
      }
    }
    llen = pl[idx];
    idx+=2;
    off = 0;
    while(off < llen){
      switch(pl[idx + off + 1]){
      case 2:
        if(linenum != pSh->height - 1){
          printf("Expected end 2 arg at end of frame %d %d\n", linenum, pSh->height);
          return -1;
        }
        if(pl[idx+off] != 2){
          printf("Though end of frame arg should be 2: %02x\n", pl[idx+off]);
        }
        off+=2;
        break;
      case 3:
        xpos += pl[idx + off];
        off+=2;
        break;
      case 4:
        pixels = pl[idx+off];
        off+=2;
        for(px = 0; px < pixels; px++){
	  setPixel(xpos, linenum, mPalette->mapPixel(pl[idx+off]));
          xpos++;
          off++;
        }
	if((pixels & 0x1) != 0){
          if(pl[idx+off] != 0){
            printf("I this should be some extra zero %02x %d\n", pl[idx+off], linenum);
	    //            return -1;
          }
          off++;
        }
        break;
      case 0:
        ///why is this here?
        off+=2;
        break;

      default:
        printf("strange command %02x %d %d %d\n", pl[idx+off+1], idx, off, linenum);
        return -1;
      }
    }
    idx+=off;
  }
  return 0;

}
