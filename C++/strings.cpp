#include <iostream>
#include <string>
using namespace std;

int main() {
    // Write your code here
    string name = "Rustam Bhadouriya";
    // we can directly use string in cpp
    cout<<"Name is: "<<name<<endl;
    // some string functions
    cout<<"Length of name: "<<name.length()<<endl;
    // we can print a specific like python we print only rust

    // substr func
    cout<<"Sub String is: "<<name.substr(0,4)<<endl;
    //output = Rust

    return 0;
}