#include "ostream"
#include "catch_with_main.hpp"
#include "vector.hpp"

///@file

///Test cases for all the operators. 


TEST_CASE( "Operator *" ){
   vector v( 1, 2 );
   vector x = v * 2;
   std::stringstream s;
   s << x;
   REQUIRE( s.str() == "(2,4)" );   
}


TEST_CASE( "Operator *, maar dan omgekeerd" ){
   vector v( 1, 2 );
   vector x = 2 * v;
   std::stringstream s;
   s << x;
   REQUIRE( s.str() == "(2,4)" );   
}

TEST_CASE( "Operator *=" ){
   vector v(1,2);
    v *= 2;
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(2,4)" );   
}

TEST_CASE( "Operator /" ){
    vector v(2,4);
    vector x = v / 2;
    std::stringstream s;
    s << x;
    REQUIRE( s.str() == "(1,2)" );   
}

TEST_CASE( "Operator /=" ){
   vector v(2,4);
    v /= 2;
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(1,2)" );   
}

TEST_CASE( "Operator +" ){
   vector v(1,2);
   vector w(2,2);
   vector x = v + w;
   std::stringstream s;
   s << x;
   REQUIRE( s.str() == "(3,4)" );   
}

TEST_CASE( "Operator -" ){
   vector v(3,4);
   vector w(2,2);
   vector x = v - w;
   std::stringstream s;
   s << x;
   REQUIRE( s.str() == "(1,2)" );   
}

TEST_CASE( "Operator -=" ){
   vector v(3,4);
   vector w(2,2);
    v -= w;
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(1,2)" );   
}

TEST_CASE( "Operator +=" ){
   vector v(1,2);
    vector w(2,2);
    v += w;
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(3,4)" );   
}

TEST_CASE( "Operator <<" ){
   vector v(1,2);
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "(1,2)" );   
}

