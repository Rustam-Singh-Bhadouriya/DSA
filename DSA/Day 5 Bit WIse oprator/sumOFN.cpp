#include <iostream>
using namespace std;

int main(){

    cout << "Sum of N numbers\n";

    int n , sum = 0;
    cout <<"Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum += i;
    }

    cout << sum << endl;
    // 1 2 3 4 5 -> 15
    return 0;

}