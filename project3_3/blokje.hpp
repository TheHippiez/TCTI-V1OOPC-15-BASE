#ifndef BLOKJE_HPP
#define BLOKJE_HPP



#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "rectangle.hpp"
class blokje :public drawable{

protected :
    bool hit = 0;
 
   int update_count =0;
    rectangle hitbox;
    vector start;
    vector end; 


public :
blokje(window & w, vector  start, vector  end );

    void draw()override;
    void update()override;
    void interact(drawable & other, drawable * objects[] )override;
};
#endif 