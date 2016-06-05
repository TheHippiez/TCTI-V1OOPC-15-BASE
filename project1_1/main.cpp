/*
_________________________________________________________________________________________
 Name        :  main.cpp
 Author      :  L Roovers
 Description :  Aanroep voor de functie die vierkantjes tekent. 
_________________________________________________________________________________________

*/

#include <stdio.h>
#include <iostream>
#include "window.hpp"
#include "filled_rectangle.hpp"

int main(int argc, char **argv){
    /* 
    De window aanroepen  en declareren als w, met de parameters voor de grote van window. 
    */
    window w( 128, 64, 2 );              
    /* 
    De functie aanroep met de parameters: w, begin coordinaten en eind coordinaten.  
    */
    filled_rectangle s(w,20,20,40,40);
    /* 
    S laten drawen. Die staat niet in de functie zodat je verschillende objecten kunt tekenen
    */
    s.draw();
    return 0;
}

