#include "SdlSc2k.h"


SdlSc2k::SdlSc2k(){
  mData = NULL;
  mSize = 0;
  mShapes = NULL;
}


SdlSc2k::~SdlSc2k(){
  ShapHeader *del;
  if(mData != NULL){
    free(mData);
  }
  while(mShapes != NULL){
    del = mShapes;
    mShapes = mShapes->next;
    free(del);
  }
}



unsigned int SdlSc2k::getUint32(unsigned char *p){
  unsigned int r;
  r = (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
  return r;
}

unsigned short SdlSc2k::getUint16(unsigned char *p){
  unsigned short r;
  r = (p[0] << 8) | p[1];
  return r;
}

void SdlSc2k::loadShap(int pIdx, ShapHeader *pSh){
  pSh->index = &(mData[pIdx]);
  pSh->len1 = getUint32(&(mData[pIdx+4]));
  pSh->scale = mData[pIdx+8];
  pSh->id = mData[pIdx+9];
  pSh->width = getUint16(&(mData[pIdx+10]));
  pSh->height = getUint16(&(mData[pIdx+12]));
  pSh->len2 = getUint32(&(mData[pIdx+14]));
  pSh->next = NULL;
}

int SdlSc2k::findStart(){
  int c;
  for(c = 0; c < mSize; c++){
    if(strncmp("SHAP", (char *)&(mData[c]), 4) == 0){
      return c;
    }
  }
  return -1;
}

int SdlSc2k::buildShapList(){
  int idx;
  ShapHeader *sh;
  int count;
  if((idx = findStart()) < 0){
    return -1;
  }
  count = 0;
  while(idx < mSize){
    sh = (ShapHeader*) malloc(sizeof(ShapHeader));
    loadShap(idx, sh);
    idx += sh->len1 + 8;
    if(sh->len2 > 6){
      //      printf("Shap %d %d %d\n", count, sh->id, sh->len2);
      //if(strncmp("SHAP", (char*)sh->index, 4) != 0){
      //printf("What am I? %s\n", sh->index);
      //}
      sh->next = mShapes;
      mShapes = sh;
      count++;
    }else{
      free(sh);
    }
  }
  return 0;
}

int SdlSc2k::loadFile(const char *pFilename){
  struct stat buf;
  int fd;
  if(stat(pFilename, &buf) != 0){
    return -1;
  }
  
  mSize = buf.st_size;
  fd = open(pFilename, O_RDONLY);
  if(fd <= 0){
    return -1;
  }
  mData = (unsigned char*) malloc(sizeof(unsigned char) * mSize);
  if(read(fd, mData, mSize) != mSize){
    printf("read problem\n");
    return -1;
  }
  close(fd);
  return buildShapList();
}

ShapHeader *SdlSc2k::getShap(unsigned short pId){
  ShapHeader *tmp;
  if(pId == 0){
    return mShapes;
  }
  tmp = mShapes;
  while(tmp != NULL){
    if(tmp->id == pId && tmp->scale == 4){
      return tmp;
    }
    tmp = tmp->next;
  }
  return NULL;
}
