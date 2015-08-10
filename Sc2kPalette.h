#ifndef SC2K_PALETTE_H
#define SC2K_PALETTE_H

#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>


typedef struct{ 
  unsigned char r;
  unsigned char g;
  unsigned char b;
}pal_entry;

typedef struct{ 
  pal_entry palette[256];
}palette;

class Sc2kPalette{
 public:
  Sc2kPalette();
  Sc2kPalette(const char *pFilename);
  unsigned int mapPixel(unsigned char pPixel);
 private:
  palette mPalette;
};
 


#endif
