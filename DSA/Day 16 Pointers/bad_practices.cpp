#include <iostream>
using namespace std;

int main(){
    int *wrong; // Its points to any adress of our memory which is risky to change dont try to do it!
    cout << wrong << "Pointer Value = " << *wrong << endl;

    // Solution ->

    int *right = 0; // it points a adress which never exits so it is safe then `wrong`
    
}