#include <iostream>
using namespace std;

int main(){
    // Refrence Variable 
    // it means that there's a variable named var and he have also 
    // a more name (home name) varu but they points to the same
    // memory adress
    // How to create them?
    // we can create Refrence variable with & oprator

    int var = 10;
    int &varu = var;
    cout << "var = " << var << " Varu = " << varu << endl;
    cout << "var's adress = " << &var << " Varu' adress = " << &varu << endl;
    // their adress and value will be same


    varu++;
    // if we update any of them they both will update!
    cout << varu << " " << var << endl;

    cout << (varu*var) << endl; // it will print 121 cuz they will mutiply with each other!

    
    return 0;
}