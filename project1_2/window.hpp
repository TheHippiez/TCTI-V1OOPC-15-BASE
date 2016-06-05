// example:
// declaration of a window class

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "windows.h"

class window {
   int x_size;
   int y_size;
   int scale;
   
   HDC hdc;
   
public:
   window( int x_size, int y_size, int scale );
   void draw( int x, int y );
   void clear();
};

#endif 
