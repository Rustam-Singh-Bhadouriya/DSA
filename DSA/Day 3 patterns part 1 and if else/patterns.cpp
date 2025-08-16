#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n = 4; // row

    int i = 1; 
    while (i <= n)
    {
        /* code */
        int j = 1;
        while (j <= i)
        {
            /* code */
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}