#include "filled_rectangle.hpp"



void filled_rectangle::draw(){
    int y_lengte  = end_y - start_y;
    int x_breedte	=	end_x - start_x;
    int i,j= 0;
    
    for(i=0;i<y_lengte;i++){
        for(j=0;j<x_breedte;j++){
            w.draw(i + start_y,j + start_x);
        }
   }   
}