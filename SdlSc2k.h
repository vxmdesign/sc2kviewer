#ifndef SDLSC2K_H
#define SDLSC2K_H

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<malloc.h>
#include<unistd.h>
#include<string.h>

typedef struct SHAP{
  unsigned char *index;
  unsigned int len1;
  unsigned char scale;
  unsigned char id;
  unsigned short width;
  unsigned short height;
  unsigned int len2;
  struct SHAP *next;
}ShapHeader;

class SdlSc2k{
 public:
  SdlSc2k();
  ~SdlSc2k();
  ShapHeader *getShap(unsigned short pId);
  int loadFile(const char *pFilename);
 private:
  unsigned int getUint32(unsigned char *pVal);
  unsigned short getUint16(unsigned char *pVal);
  void loadShap(int pIdx, ShapHeader *pSh);
  int findStart();
  int buildShapList();
  int mSize;
  unsigned char *mData;
  ShapHeader *mShapes;
};

#endif
