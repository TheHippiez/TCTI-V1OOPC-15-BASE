// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle (window & w, const vector & start, const vector & end,const vector& p_size,const vector& p_bounce):
	drawable(w,start,p_size,p_bounce),
   left(   w, vector( start.x, start.y ), vector( start.x, end.y   ) ),
   right(  w, vector( end.x,   start.y ), vector( end.x,   end.y   ) ),
   top(    w, vector( start.x, start.y ), vector( end.x,   start.y ) ),
   bottom( w, vector( start.x, end.y   ), vector( end.x,   end.y  ) )
{}

void rectangle::draw(){
   left.draw();
   right.draw();
   top.draw();
   bottom.draw();
}

