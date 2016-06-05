#include "vector.hpp"
///@file
//
/// + Operator, returns positive value.
vector vector::operator+()const{
    return vector(x,y);
}

/// + Operator, adds two vectors together and returns the new vector. 
vector vector::operator+(const vector & rhs) const{
    return vector( x+rhs.x,y+rhs.y);
}
/// - Operator, reutnrs a vector with a negative value.
vector vector::operator-()const{
    return vector(x*-1,y*-1);
}

/// - Operator, subtracts a vector from another vector. 
vector vector::operator-(const vector & rhs) const{
    return vector( x-rhs.x,y-rhs.y);
}

/// * operator, Multiply a vector with another one. 
vector vector::operator*(const int & rhs){
    x=x*rhs;
    y=y*rhs;
    return*this;
}

/// += Operator, add together two vectors. 
vector vector::operator+=(const vector & rhs) {
    x=x+rhs.x;
    y=y+rhs.y;
    return*this;
}

/// -= Operator, Subtract two vectors. 
vector vector::operator-=(const vector & rhs) {
    x=x-rhs.x;
    y=y-rhs.y;
    return*this;
}
/// *= Oparetor, multiply two vectors. 
vector &vector::operator*=(const int  rhs) {
    x=x*rhs;
    y=y*rhs;
    return*this;
}
/// /= Operator, divide two vectors. 
vector &vector::operator/=(const int  rhs) {
    x=x/rhs;
    y=y/rhs;
    return*this;
}
/// Operator, divides two vectors. 
vector vector::operator/(const int & rhs){
    x=x/rhs;
    y=y/rhs;
    return*this;
}
/// Push int into a string . 
std::ostream & operator<<( std::ostream & lhs, vector pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}
/// * Operator, multiply two vectors. More than 1 argument needed, so not in the actual vector class. 
vector operator*(const int lhs, const vector &rhs){
    return vector(rhs.x*lhs,rhs.y*lhs);
}