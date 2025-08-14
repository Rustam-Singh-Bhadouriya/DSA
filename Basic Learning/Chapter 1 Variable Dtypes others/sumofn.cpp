#include <iostream>
using namespace std;

int main(){
    // sum of n number
    int n;
    int TotalSum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i < n+1; i++)
    {
        /* code */
        TotalSum += i;
    }
    cout << TotalSum << endl;

    return 0;
}