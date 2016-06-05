#include "blokje.hpp"
#include "rectangle.hpp"

blokje::blokje(window & w, vector start,  vector  end ):
drawable(w,start,end-start),
hitbox(w,vector(start.x,start.y),vector(end.x,end.y),update_count),
end(end),start(start)

{}

void blokje::update(){
    if (hit ==true){
 hitbox.kill +=2;
    }}



 void blokje::draw(){
hitbox.draw_kill();
 }


void blokje::interact( drawable & other,drawable * objects[] ){
   if( this != & other){
      if( overlaps( other )){
     hit = 1;
        }}}
