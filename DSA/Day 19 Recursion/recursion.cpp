#include <iostream>
using namespace std;

int Fac(int x){
    if (x == 0 || x == 1) return 1;
    return x * Fac(x-1);
}

int main(int){
    cout << "Hello C++" << endl;
    cout << Fac(5) << endl;
}