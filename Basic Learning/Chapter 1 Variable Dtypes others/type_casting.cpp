#include <iostream>
using namespace std;

int main(){
    cout << "Type Casting and convertion\n";

    // Connevrtion -> mean smaal size dtype or value to big 

    float price = 3.90F; // float take 4 byte
    double newPrice = price; // double takes 8 byte
    // so its convertion

    // casting -> forclly like big value to small
    double test = 45.332; // 8byte
    int otherValue = (int) test; // 4 byte
    cout << otherValue << endl;
    return 0;
}