SRCS=sc2kviewer.cpp ScDisplay.cpp SdlSc2k.cpp Sc2kPalette.cpp

OBJS=$(patsubst %.cpp, %.o, $(SRCS))


CPPFLAGS=-Wall -g `sdl-config --cflags`

# Linking flags
LDFLAGS=`sdl-config --libs` -lSDL 

all: sc2kviewer

sc2kviewer: $(OBJS)
	g++ -Wall -g -o sc2kviewer $^ $(LDFLAGS)


%.o: %.cpp
	g++ -Wall -g $(CPPFLAGS) -c $^

clean:
	rm -rf *.o
	rm -rf sc2kviewer

