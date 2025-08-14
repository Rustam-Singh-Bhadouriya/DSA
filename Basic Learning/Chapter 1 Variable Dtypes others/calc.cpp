#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    char opr;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter oprator (+,-,/,*): ";
    cin >> opr;
    cout << "Enter num2: ";
    cin >> num2;

    switch (opr)
    {
    case '+': cout << num1 + num2 << endl;
        break;
    
    case '-': cout << num1 -num2 << endl;
        break;
    
    case '/': cout << num1/num2 << endl;
        break;
    
    case '*' : cout << num1 * num2 << endl;
        break;
    
    default: cout << "Enter valid oprator" << endl;
        break;
    }
    return 0;
}