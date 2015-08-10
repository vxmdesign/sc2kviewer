#include <stdio.h>
#include <string.h>
#include "ScDisplay.h"
#include "SdlSc2k.h"


void debugShap(ShapHeader *sh){
  unsigned int c;
  unsigned char *pyld;
  pyld = &(sh->index[18]);
  for(c = 0; c < sh->len2;c++){
    printf("%02x ", pyld[c]);
  }
  printf("\n");

}

ShapHeader *getNext(ShapHeader *cur, ShapHeader *head){
  cur = cur->next;
  if(cur == NULL){
    cur = head;
  }
  return cur;
}

ShapHeader *getPrev(ShapHeader *cur, ShapHeader *head){
  ShapHeader *tmp;
  if(cur == head){
    cur = NULL;
  }
  tmp = head;
  while(tmp->next != cur){
    tmp = tmp->next;
  }
  return tmp;  
}

int main(int argc, char **argv){
  SdlSc2k *sc;
  ScDisplay *sd;
  int id;
  ShapHeader *sh;
  ShapHeader *head;
  int running;
  SDL_Event ev;
  int key_state;
  if(argc != 2 && argc != 3){ 
    printf("need 3 args\n");
  }
 
  sd = new ScDisplay();
  sc = new SdlSc2k();
  sc->loadFile(argv[1]);
  head = sc->getShap(0);
  if(argc == 3){
    id = atoi(argv[2]);
    sh = sc->getShap((unsigned short)(id & 0xffff));
  }else{
    sh = head;
  }
  sd->initGraph(512,512);
  sd->display(sh);
  running = 1;
  key_state = 0;
  while(running){
    SDL_PollEvent(&ev);
    switch(ev.type){
    case SDL_QUIT:
      running = 0;
      break;
    case SDL_KEYDOWN:
      if(key_state == 0){
	if(ev.key.keysym.sym == SDLK_UP){
	  sh = getPrev(sh, head);
	}else if(ev.key.keysym.sym == SDLK_DOWN){
	  sh = getNext(sh, head);
	}else if(ev.key.keysym.sym == SDLK_d){
	  debugShap(sh);
	}
	
	printf("Select: Scale: %02x ID: (%02x %d) Len: %d\n", sh->scale, sh->id, sh->id, sh->len2);
	sd->display(sh);
	key_state = 1;
      }
      break;
    case SDL_KEYUP:
      key_state = 0;
      break; 
    }
 
  }
  delete sc;
  delete sd;

}
