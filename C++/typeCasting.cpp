#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int a = 343;
    float b = 45.32;

    cout<<(float) a << endl;  // this changed to float
    // output = 343 but when you devide answer will be in float

    cout<<(float) a/34 << endl; // output = 10.08 something

    cout<< (int) b << endl; // output will: 45
    return 0;
}