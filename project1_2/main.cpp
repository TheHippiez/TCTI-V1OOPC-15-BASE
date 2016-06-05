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
#include "locomotive.hpp"

int main(int argc, char **argv){
    /* 
    De window aanroepen  en declareren als w, met de parameters voor de grote van window. 
    */
    window w( 1024, 512, 2 );              
    /* 
    De functie aanroep met de parameters: w, begin coordinaten en eind coordinaten.  
    */
    locomotive s(w, 10, 10, 1);
    locomotive l(w, 100, 0, 2);
    /* 
    S laten drawen. Die staat niet in de functie zodat je verschillende objecten kunt tekenen
    */
    s.draw();
    l.draw();
    return 0;
}

