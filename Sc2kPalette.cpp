#include "Sc2kPalette.h"

Sc2kPalette::Sc2kPalette(){
  unsigned char pix;
  int c;
  pix = 0;
  for(c = 0; c < 256; c++){
    mPalette.palette[c].r = pix;
    pix+=7;
    mPalette.palette[c].g = pix;
    pix+=7;
    mPalette.palette[c].b = pix;
    pix+=7;
  }
  mPalette.palette[0].r = 0;
  mPalette.palette[0].g = 0;
  mPalette.palette[0].b = 0;

  mPalette.palette[0xa4].r = 103;
  mPalette.palette[0xa4].g = 103;
  mPalette.palette[0xa4].b = 103;

  mPalette.palette[0xa0].r = 159;
  mPalette.palette[0xa0].g = 159;
  mPalette.palette[0xa0].b = 159;

  mPalette.palette[0x9f].r = 171;
  mPalette.palette[0x9f].g = 171;
  mPalette.palette[0x9f].b = 171;

  mPalette.palette[0xa1].r = 143;
  mPalette.palette[0xa1].g = 143;
  mPalette.palette[0xa1].b = 143;

  mPalette.palette[0xff].r = 255;
  mPalette.palette[0xff].g = 255;
  mPalette.palette[0xff].b = 255;

  mPalette.palette[0x48].r = 7;
  mPalette.palette[0x48].g = 115;
  mPalette.palette[0x48].b = 0;

  mPalette.palette[0x46].r = 7;
  mPalette.palette[0x46].g = 167;
  mPalette.palette[0x46].b = 0;

  mPalette.palette[0x49].r = 7;
  mPalette.palette[0x49].g = 91;
  mPalette.palette[0x49].b = 0;

  mPalette.palette[0x27].r = 175;
  mPalette.palette[0x27].g = 63;
  mPalette.palette[0x27].b = 27;

  mPalette.palette[0x2b].r = 255;
  mPalette.palette[0x2b].g = 159;
  mPalette.palette[0x2b].b = 159;
  
  mPalette.palette[0x73].r = 203;
  mPalette.palette[0x73].g = 199;
  mPalette.palette[0x73].b = 135;
  

  mPalette.palette[0x55].r = 107;
  mPalette.palette[0x55].g = 199;
  mPalette.palette[0x55].b = 219;

  mPalette.palette[0x58].r = 19;
  mPalette.palette[0x58].g = 123;
  mPalette.palette[0x58].b = 183;

  mPalette.palette[0x59].r = 0;
  mPalette.palette[0x59].g = 99;
  mPalette.palette[0x59].b = 171;

  mPalette.palette[0x33].r = 191;
  mPalette.palette[0x33].g = 179;
  mPalette.palette[0x33].b = 43;
  
  mPalette.palette[0x31].r = 231;
  mPalette.palette[0x31].g = 231;
  mPalette.palette[0x31].b = 75;

  mPalette.palette[0x26].r = 199;
  mPalette.palette[0x26].g = 87;
  mPalette.palette[0x26].b = 43;

  mPalette.palette[0xa5].r = 87;
  mPalette.palette[0xa5].g = 87;
  mPalette.palette[0xa5].b = 87;
 
  mPalette.palette[0x47].r = 7;
  mPalette.palette[0x47].g = 139;
  mPalette.palette[0x47].b = 0;
  
  mPalette.palette[0x4a].r = 7;
  mPalette.palette[0x4a].g = 67;
  mPalette.palette[0x4a].b = 0;

  mPalette.palette[0x4f].r = 0;
  mPalette.palette[0x4f].g = 207;
  mPalette.palette[0x4f].b = 207;

  mPalette.palette[0x29].r = 127;
  mPalette.palette[0x29].g = 23;
  mPalette.palette[0x29].b = 7;

  mPalette.palette[0x7d].r = 107;
  mPalette.palette[0x7d].g = 71;
  mPalette.palette[0x7d].b = 27;

  mPalette.palette[0xa3].r = 115;
  mPalette.palette[0xa3].g = 115;
  mPalette.palette[0xa3].b = 115;

  mPalette.palette[0xa8].r = 47;
  mPalette.palette[0xa8].g = 47;
  mPalette.palette[0xa8].b = 47;

  mPalette.palette[0xa7].r = 59;
  mPalette.palette[0xa7].g = 59;
  mPalette.palette[0xa7].b = 59;
  
  mPalette.palette[0x9e].r = 187;
  mPalette.palette[0x9e].g = 187;
  mPalette.palette[0x9e].b = 187;

  mPalette.palette[0x73].r = 203;
  mPalette.palette[0x73].g = 199;
  mPalette.palette[0x73].b = 135;

  mPalette.palette[0x74].r = 191;
  mPalette.palette[0x74].g = 183;
  mPalette.palette[0x74].b = 119;

  mPalette.palette[0x9d].r = 199;
  mPalette.palette[0x9d].g = 199;
  mPalette.palette[0x9d].b = 199;
  
  mPalette.palette[0x2e].r = 255;
  mPalette.palette[0x2e].g = 67;
  mPalette.palette[0x2e].b = 67;

  mPalette.palette[0x2f].r = 255;
  mPalette.palette[0x2f].g = 35;
  mPalette.palette[0x2f].b = 35;

  mPalette.palette[0x9a].r = 243;
  mPalette.palette[0x9a].g = 243;
  mPalette.palette[0x9a].b = 243;

  mPalette.palette[0x87].r = 19;
  mPalette.palette[0x87].g = 183;
  mPalette.palette[0x87].b = 243;

  mPalette.palette[0x88].r = 15;
  mPalette.palette[0x88].g = 167;
  mPalette.palette[0x88].b = 219;

  mPalette.palette[0x51].r = 0;
  mPalette.palette[0x51].g = 115;
  mPalette.palette[0x51].b = 115;

  mPalette.palette[0x52].r = 0;
  mPalette.palette[0x52].g = 67;
  mPalette.palette[0x52].b = 67;

  mPalette.palette[0xa6].r = 75;
  mPalette.palette[0xa6].g = 75;
  mPalette.palette[0xa6].b = 75;

  mPalette.palette[0xe0].r = 201;
  mPalette.palette[0xe0].g = 2;
  mPalette.palette[0xe0].b = 2;

  mPalette.palette[0x8a].r = 27;
  mPalette.palette[0x8a].g = 119;
  mPalette.palette[0x8a].b = 211;

  mPalette.palette[0x8f].r = 0;
  mPalette.palette[0x8f].g = 0;
  mPalette.palette[0x8f].b = 119;

  mPalette.palette[0x7a].r = 135;
  mPalette.palette[0x7a].g = 107;
  mPalette.palette[0x7a].b = 51;

  mPalette.palette[0x78].r = 155;
  mPalette.palette[0x78].g = 135;
  mPalette.palette[0x78].b = 71;

  mPalette.palette[0x89].r = 7;
  mPalette.palette[0x89].g = 147;
  mPalette.palette[0x89].b = 215;

  mPalette.palette[0x9b].r = 227;
  mPalette.palette[0x9b].g = 227;
  mPalette.palette[0x9b].b = 227;

  mPalette.palette[0x76].r = 171;
  mPalette.palette[0x76].g = 159;
  mPalette.palette[0x76].b = 95;

  mPalette.palette[0x7c].r = 115;
  mPalette.palette[0x7c].g = 83;
  mPalette.palette[0x7c].b = 35;

  mPalette.palette[0x37].r = 111;
  mPalette.palette[0x37].g = 87;
  mPalette.palette[0x37].b = 0;

  mPalette.palette[0xa9].r = 37;
  mPalette.palette[0xa9].g = 37;
  mPalette.palette[0xa9].b = 37;

  mPalette.palette[0x21].r = 119;
  mPalette.palette[0x21].g = 0;
  mPalette.palette[0x21].b = 0;

  mPalette.palette[0xa2].r = 131;
  mPalette.palette[0xa2].g = 131;
  mPalette.palette[0xa2].b = 131;

  mPalette.palette[0x9c].r = 215;
  mPalette.palette[0x9c].g = 215;
  mPalette.palette[0x9c].b = 215;

  mPalette.palette[0xaa].r = 19;
  mPalette.palette[0xaa].g = 19;
  mPalette.palette[0xaa].b = 19;

  mPalette.palette[0x8b].r = 11;
  mPalette.palette[0x8b].g = 83;
  mPalette.palette[0x8b].b = 243;

  mPalette.palette[0x86].r = 139;
  mPalette.palette[0x86].g = 223;
  mPalette.palette[0x86].b = 239;

  mPalette.palette[0x63].r = 0;
  mPalette.palette[0x63].g = 0;
  mPalette.palette[0x63].b = 227;

  mPalette.palette[0x5e].r = 67;
  mPalette.palette[0x5e].g = 67;
  mPalette.palette[0x5e].b = 255;

  mPalette.palette[0x75].r = 183;
  mPalette.palette[0x75].g = 171;
  mPalette.palette[0x75].b = 107;

  mPalette.palette[0x77].r = 163;
  mPalette.palette[0x77].g = 147;
  mPalette.palette[0x77].b = 83;

  mPalette.palette[0x7b].r = 123;
  mPalette.palette[0x7b].g = 95;
  mPalette.palette[0x7b].b = 43;

  mPalette.palette[0x80].r = 75;
  mPalette.palette[0x80].g = 39;
  mPalette.palette[0x80].b = 11;

  mPalette.palette[0x82].r = 55;
  mPalette.palette[0x82].g = 23;
  mPalette.palette[0x82].b = 0;

  mPalette.palette[0x79].r = 143;
  mPalette.palette[0x79].g = 119;
  mPalette.palette[0x79].b = 59;

  mPalette.palette[0x34].r = 171;
  mPalette.palette[0x34].g = 155;
  mPalette.palette[0x34].b = 31;

  mPalette.palette[0x3f].r = 99;
  mPalette.palette[0x3f].g = 159;
  mPalette.palette[0x3f].b = 0;

  mPalette.palette[0x7e].r = 95;
  mPalette.palette[0x7e].g = 59;
  mPalette.palette[0x7e].b = 19;

  mPalette.palette[0x5f].r = 35;
  mPalette.palette[0x5f].g = 39;
  mPalette.palette[0x5f].b = 255;

  mPalette.palette[0x5d].r = 95;
  mPalette.palette[0x5d].g = 99;
  mPalette.palette[0x5d].b = 255;

  mPalette.palette[0x64].r = 0;
  mPalette.palette[0x64].g = 0;
  mPalette.palette[0x64].b = 203;

  mPalette.palette[0x67].r = 0;
  mPalette.palette[0x67].g = 0;
  mPalette.palette[0x67].b = 127;

  mPalette.palette[0x69].r = 0;
  mPalette.palette[0x69].g = 0;
  mPalette.palette[0x69].b = 79;

  mPalette.palette[0x62].r = 0;
  mPalette.palette[0x62].g = 0;
  mPalette.palette[0x62].b = 239;

  mPalette.palette[0x65].r = 0;
  mPalette.palette[0x65].g = 0;
  mPalette.palette[0x65].b = 179;

  mPalette.palette[0x1f].r = 171;
  mPalette.palette[0x1f].g = 0;
  mPalette.palette[0x1f].b = 0;

  mPalette.palette[0x1e].r = 199;
  mPalette.palette[0x1e].g = 0;
  mPalette.palette[0x1e].b = 0;

  mPalette.palette[0x1c].r = 255;
  mPalette.palette[0x1c].g = 0;
  mPalette.palette[0x1c].b = 0;

  mPalette.palette[0x1d].r = 227;
  mPalette.palette[0x1d].g = 0;
  mPalette.palette[0x1d].b = 0;

  mPalette.palette[0x20].r = 147;
  mPalette.palette[0x20].g = 0;
  mPalette.palette[0x20].b = 0;

  mPalette.palette[0x22].r = 91;
  mPalette.palette[0x22].g = 0;
  mPalette.palette[0x22].b = 0;

  mPalette.palette[0x60].r = 0;
  mPalette.palette[0x60].g = 7;
  mPalette.palette[0x60].b = 255;

  mPalette.palette[0xcf].r = 73;
  mPalette.palette[0xcf].g = 69;
  mPalette.palette[0xcf].b = 255;

  mPalette.palette[0xce].r = 92;
  mPalette.palette[0xce].g = 119;
  mPalette.palette[0xce].b = 255;

  mPalette.palette[0xcd].r = 39;
  mPalette.palette[0xcd].g = 32;
  mPalette.palette[0xcd].b = 255;

  mPalette.palette[0xcc].r = 73;
  mPalette.palette[0xcc].g = 69;
  mPalette.palette[0xcc].b = 255;

  mPalette.palette[0xcb].r = 92;
  mPalette.palette[0xcb].g = 119;
  mPalette.palette[0xcb].b = 255;

  mPalette.palette[0xca].r = 99;
  mPalette.palette[0xca].g = 155;
  mPalette.palette[0xca].b = 255;

  mPalette.palette[0xc9].r = 16;
  mPalette.palette[0xc9].g = 10;
  mPalette.palette[0xc9].b = 255;

  mPalette.palette[0xc8].r = 39;
  mPalette.palette[0xc8].g = 32;
  mPalette.palette[0xc8].b = 255;

  mPalette.palette[0x2d].r = 255;
  mPalette.palette[0x2d].g = 95;
  mPalette.palette[0x2d].b = 95;

  mPalette.palette[0x2c].r = 255;
  mPalette.palette[0x2c].g = 127;
  mPalette.palette[0x2c].b = 127;

  mPalette.palette[0x28].r = 151;
  mPalette.palette[0x28].g = 39;
  mPalette.palette[0x28].b = 19;

  mPalette.palette[0x23].r = 67;
  mPalette.palette[0x23].g = 0;
  mPalette.palette[0x23].b = 0;

  mPalette.palette[0x2a].r = 103;
  mPalette.palette[0x2a].g = 7;
  mPalette.palette[0x2a].b = 0;

  mPalette.palette[0x24].r = 251;
  mPalette.palette[0x24].g = 143;
  mPalette.palette[0x24].b = 75;

  mPalette.palette[0x7f].r = 87;
  mPalette.palette[0x7f].g = 51;
  mPalette.palette[0x7f].b = 15;

  mPalette.palette[0x81].r = 67;
  mPalette.palette[0x81].g = 31;
  mPalette.palette[0x81].b = 7;

  mPalette.palette[0x83].r = 47;
  mPalette.palette[0x83].g = 15;
  mPalette.palette[0x83].b = 0;

  mPalette.palette[0x30].r = 251;
  mPalette.palette[0x30].g = 255;
  mPalette.palette[0x30].b = 163;

  mPalette.palette[0xe8].r = 0;
  mPalette.palette[0xe8].g = 0;
  mPalette.palette[0xe8].b = 0;

  mPalette.palette[0x32].r = 211;
  mPalette.palette[0x32].g = 207;
  mPalette.palette[0x32].b = 59;

  mPalette.palette[0x25].r = 223;
  mPalette.palette[0x25].g = 111;
  mPalette.palette[0x25].b = 55;

  mPalette.palette[0x35].r = 151;
  mPalette.palette[0x35].g = 131;
  mPalette.palette[0x35].b = 19;

  mPalette.palette[0x36].r = 131;
  mPalette.palette[0x36].g = 107;
  mPalette.palette[0x36].b = 11;

  mPalette.palette[0x38].r = 91;
  mPalette.palette[0x38].g = 67;
  mPalette.palette[0x38].b = 0;

  mPalette.palette[0x39].r = 199;
  mPalette.palette[0x39].g = 255;
  mPalette.palette[0x39].b = 67;

  mPalette.palette[0x3c].r = 147;
  mPalette.palette[0x3c].g = 231;
  mPalette.palette[0x3c].b = 0;

  mPalette.palette[0x3d].r = 131;
  mPalette.palette[0x3d].g = 207;
  mPalette.palette[0x3d].b = 0;

  mPalette.palette[0x3e].r = 119;
  mPalette.palette[0x3e].g = 183;
  mPalette.palette[0x3e].b = 0;

  mPalette.palette[0x43].r = 0;
  mPalette.palette[0x43].g = 239;
  mPalette.palette[0x43].b = 0;

  mPalette.palette[0x44].r = 0;
  mPalette.palette[0x44].g = 215;
  mPalette.palette[0x44].b = 0;

  mPalette.palette[0x45].r = 7;
  mPalette.palette[0x45].g = 191;
  mPalette.palette[0x45].b = 0;

  mPalette.palette[0x41].r = 99;
  mPalette.palette[0x41].g = 255;
  mPalette.palette[0x41].b = 95;

  mPalette.palette[0x40].r = 159;
  mPalette.palette[0x40].g = 255;
  mPalette.palette[0x40].b = 159;

  mPalette.palette[0x8e].r = 0;
  mPalette.palette[0x8e].g = 0;
  mPalette.palette[0x8e].b = 215;

  mPalette.palette[0x61].r = 0;
  mPalette.palette[0x61].g = 0;
  mPalette.palette[0x61].b = 255;

  mPalette.palette[0xd0].r = 35;
  mPalette.palette[0xd0].g = 39;
  mPalette.palette[0xd0].b = 255;

  mPalette.palette[0xd1].r = 35;
  mPalette.palette[0xd1].g = 39;
  mPalette.palette[0xd1].b = 255;

  mPalette.palette[0xd2].r = 49;
  mPalette.palette[0xd2].g = 62;
  mPalette.palette[0xd2].b = 255;

  mPalette.palette[0xd3].r = 35;
  mPalette.palette[0xd3].g = 39;
  mPalette.palette[0xd3].b = 255;

  mPalette.palette[0x84].r = 39;
  mPalette.palette[0x84].g = 11;
  mPalette.palette[0x84].b = 0;

  mPalette.palette[0x8c].r = 31;
  mPalette.palette[0x8c].g = 0;
  mPalette.palette[0x8c].b = 251;

  mPalette.palette[0x90].r = 0;
  mPalette.palette[0x90].g = 0;
  mPalette.palette[0x90].b = 167;

  mPalette.palette[0x8d].r = 0;
  mPalette.palette[0x8d].g = 35;
  mPalette.palette[0x8d].b = 247;

  mPalette.palette[0x6d].r = 191;
  mPalette.palette[0x6d].g = 67;
  mPalette.palette[0x6d].b = 255;

  mPalette.palette[0xc5].r = 64;
  mPalette.palette[0xc5].g = 16;
  mPalette.palette[0xc5].b = 3;

  mPalette.palette[0xc3].r = 255;
  mPalette.palette[0xc3].g = 15;
  mPalette.palette[0xc3].b = 17;

  mPalette.palette[0xc4].r = 255;
  mPalette.palette[0xc4].g = 249;
  mPalette.palette[0xc4].b = 6;

  mPalette.palette[0x6b].r = 231;
  mPalette.palette[0x6b].g = 187;
  mPalette.palette[0x6b].b = 255;

  mPalette.palette[0x6c].r = 211;
  mPalette.palette[0x6c].g = 127;
  mPalette.palette[0x6c].b = 255;

  mPalette.palette[0x70].r = 99;
  mPalette.palette[0x70].g = 0;
  mPalette.palette[0x70].b = 159;

  mPalette.palette[0x6f].r = 131;
  mPalette.palette[0x6f].g = 0;
  mPalette.palette[0x6f].b = 207;

  mPalette.palette[0x6a].r = 0;
  mPalette.palette[0x6a].g = 0;
  mPalette.palette[0x6a].b = 67;

  mPalette.palette[0x50].r = 0;
  mPalette.palette[0x50].g = 159;
  mPalette.palette[0x50].b = 159;

  mPalette.palette[0x42].r = 35;
  mPalette.palette[0x42].g = 255;
  mPalette.palette[0x42].b = 35;

  mPalette.palette[0x85].r = 187;
  mPalette.palette[0x85].g = 179;
  mPalette.palette[0x85].b = 135;

  mPalette.palette[0x12].r = 16;
  mPalette.palette[0x12].g = 117;
  mPalette.palette[0x12].b = 101;

  mPalette.palette[0x13].r = 20;
  mPalette.palette[0x13].g = 125;
  mPalette.palette[0x13].b = 109;

  mPalette.palette[0x14].r = 24;
  mPalette.palette[0x14].g = 154;
  mPalette.palette[0x14].b = 134;

  mPalette.palette[0x15].r = 24;
  mPalette.palette[0x15].g = 166;
  mPalette.palette[0x15].b = 142;

  mPalette.palette[0x16].r = 28;
  mPalette.palette[0x16].g = 178;
  mPalette.palette[0x16].b = 154;

  mPalette.palette[0x17].r = 28;
  mPalette.palette[0x17].g = 190;
  mPalette.palette[0x17].b = 166;

  mPalette.palette[0x18].r = 32;
  mPalette.palette[0x18].g = 207;
  mPalette.palette[0x18].b = 178;

  mPalette.palette[0x19].r = 255;
  mPalette.palette[0x19].g = 255;
  mPalette.palette[0x19].b = 255;

  mPalette.palette[0x1a].r = 255;
  mPalette.palette[0x1a].g = 85;
  mPalette.palette[0x1a].b = 85;

  mPalette.palette[0x1b].r = 255;
  mPalette.palette[0x1b].g = 85;
  mPalette.palette[0x1b].b = 255;

  mPalette.palette[0x3a].r = 182;
  mPalette.palette[0x3a].g = 255;
  mPalette.palette[0x3a].b = 32;

  mPalette.palette[0x3b].r = 162;
  mPalette.palette[0x3b].g = 255;
  mPalette.palette[0x3b].b = 0;


  mPalette.palette[0x66].r = 0;
  mPalette.palette[0x66].g = 0;
  mPalette.palette[0x66].b = 154;

  mPalette.palette[0x68].r = 0;
  mPalette.palette[0x68].g = 0;
  mPalette.palette[0x68].b = 89;

}

Sc2kPalette::Sc2kPalette(const char *pFilename){
  int fd;
  unsigned char buf[768];
  int c;
  fd = open(pFilename, O_RDONLY);
  if(fd <= 0){
    printf("Could not open file\n");
    return;
  }
  if(read(fd, buf, 768) != 768){
    printf("Read not complete\n");
    return;
  }
  close(fd);
  for(c = 0; c < 256; c++){
    mPalette.palette[c].r = buf[c * 3];
    mPalette.palette[c].g = buf[c * 3 + 1];
    mPalette.palette[c].b = buf[c * 3 + 2];
  }

}

unsigned int Sc2kPalette::mapPixel(unsigned char pPixel){
  unsigned int p;
  p = (mPalette.palette[pPixel].r << 16) | (mPalette.palette[pPixel].g << 8) | (mPalette.palette[pPixel].b);
  return p;
}
