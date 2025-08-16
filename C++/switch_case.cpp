#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int a;
    cout << "Enter number: ";
    cin >> a;

    switch (a)
    {
    case 12:
        cout << "Your age is 12";
        break;

    default:
        cout << "Your age: " << a;
        break;
    }

    return 0;
}