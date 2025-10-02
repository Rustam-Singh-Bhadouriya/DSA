#include <iostream>
using namespace std;

int main(){
    int num  = 6;

    // Adress of oprator used for view the adress of var, oprator = &
    cout << "Adress of num = " << &num << endl;

    int *ptr = &num;
    cout << "ptr value = " << ptr << endl;
    // By Defoult adress are in hexadecimal format but we can change it!
    cout << "ptr's afress value = " << (int)&ptr << endl;

    int *pttr = 0;
    cout << pttr << "Pointer Value = " << *pttr << endl;
}