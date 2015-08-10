#ifndef SC_DISPLAY_H
#define SC_DISPLAY_H

#include <SDL.h>
#include "SdlSc2k.h"
#include "Sc2kPalette.h"


class ScDisplay{
 public:
  ScDisplay();
  ~ScDisplay();
  int initGraph(int pWidth, int pHeight);
  void display(ShapHeader *pSh);
  void setPixel(int pX, int pY, unsigned int pColor);
 private:
  int process(ShapHeader *pSh);
  int mWidth;
  int mHeight;
  SDL_Surface *mDisplay;
  SDL_Surface *mImage;
  Sc2kPalette *mPalette;
};

#endif
