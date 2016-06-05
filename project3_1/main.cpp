#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "rectangle.hpp"
#include "muur.hpp"

int main(){
    window w( vector( 128, 64 ), 2 );
    ball b( w, vector( 50, 20 ), 9, vector( 5, 2 ) );
    muur border(w,vector (0,4),vector(128,60),true,5,0);
    drawable * objects[] = { &b, &border };

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      wait_ms( 200 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

