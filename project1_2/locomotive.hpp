#ifndef locomotive_HPP
#define locomotive_HPP

#include "window.hpp"
#include "filled_rectangle.hpp"
#include "line.hpp"
#include "circle.hpp"


class locomotive{
    
private:
        int axis_x;
        int axis_y;
        int number;
        window & w;
        filled_rectangle filled1;
        filled_rectangle filled2;
        filled_rectangle filled3;
        line line1;
        circle  circle1;
        circle circle2;
        circle circle3;
        

public:
        locomotive(window & w, int axis_x,int axis_y, int number):
            filled1(w,(40+axis_x),(50+axis_y),(50+axis_x),(110)+axis_y),
            filled2(w,(20+axis_x),(80+axis_y),(50+axis_x),(110+axis_y)),
            filled3(w,(25+axis_x),(60+axis_y),(50+axis_x),(70+axis_y)),
            line1(w,(55+axis_y),(60+axis_x),(105+axis_y),(60+axis_x)),
            circle1(w,(60+axis_y),(60+axis_x),(10)*number),
            circle2(w,(80+axis_y),(60+axis_x),(10)*number),
            circle3(w,(100+axis_y),(60+axis_x),(10)*number),
            w(w)
            {}
            void draw( );
    };



#endif 