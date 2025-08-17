#include <iostream>
using namespace std;


int main(){

    cout << "Fabbonachi Series\n";

    int n;
    cout <<"Enter Number: ";
    cin >> n;
    

    int a = 0 , b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int nextNumber = a+b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

}