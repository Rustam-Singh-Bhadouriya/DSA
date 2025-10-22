//
// Created by Rustam on 10/16/2025.
//

#include <iostream>
#include "Hero.cpp" // we can write class out of another file
using namespace std;


// OOPS -> 1) properties, 2) behavior
// properties meant by ability and behavior meant for what it do.


int main() {
    // OOPS -> Object Oriented Programming System.
    cout << "Hellow OOPS!\n";
    // creation of Object
    Hero TechnoBlade;
    cout << sizeof(TechnoBlade) << endl;
    //  cout << sizeof(string) << endl;

    // properties decleration :-
    TechnoBlade.health = 9999999;
    TechnoBlade.keywords = "Techo Never Dies ..!!";
    // TechnoBlade
    cout << "TechnoBlade's Health: " <<  TechnoBlade.health << " Around infinite\n";
    cout << TechnoBlade.keywords << endl;

        
}