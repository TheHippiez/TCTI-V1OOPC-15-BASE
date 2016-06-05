#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "ostream"


///@file

/// Declarations of all operators. 

class vector {
public:
   int x;
   int y; 
   
   vector( int x, int y ): 
      x( x ), y( y )
   {}
   
   vector(){}

vector operator+() const ; 
vector operator+(const vector &rhs) const;

vector operator-()const;
vector operator-(const vector & rhs) const;

vector operator*(const int & rhs);

vector operator+=(const vector & rhs) ;
vector operator-=(const vector & rhs) ;
vector operator/(const int & rhs) ;

vector &operator*=(const int  rhs) ;
vector &operator/=(const int  rhs) ;
};

vector operator*(const int lhs, const vector &rhs);

std::ostream & operator<<( std::ostream & lhs, vector pos );

#endif