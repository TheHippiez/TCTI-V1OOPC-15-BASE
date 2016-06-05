#include "ball.hpp"
#include <iostream>
using namespace std;
void ball::update(){
   location += speed;
}

ball::ball( window & w, const vector & midpoint, int radius, const vector & speed ):
   circle( w, midpoint, radius ),
   speed( speed )
{}

void ball::interact( drawable & other ){
   if( this != & other){
      if( overlaps( other )){
         speed.x *= other.bounce.x;
         speed.y *= other.bounce.y;
      }
   }
}