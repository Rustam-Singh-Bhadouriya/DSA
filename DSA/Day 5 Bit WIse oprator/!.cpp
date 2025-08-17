#include <iostream>
using namespace std;

int main(){

    cout << "!\n";

    int n , factorial = 1;
    cout <<"Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        factorial *= i;
    }
    cout << factorial;
    
}