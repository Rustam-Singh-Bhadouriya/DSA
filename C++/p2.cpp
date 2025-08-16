#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    
    return x * factorial(x-1);
}

int main() {
    // Write your code here
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Facrotial is: "<<factorial(num);
    
    return 0;
}