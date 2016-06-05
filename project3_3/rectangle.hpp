// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

class rectangle : public drawable {
protected:
   vector end;
   vector start;
   line left;
   line right;
   line top;
   line bottom;
   
   
public:
   rectangle( window & w, const vector & start, const vector & end,int kill=0);   
   void draw() override;
   void draw_full();
   void draw_kill();
    int kill;
};


#endif // RECTANGLE_HPP
