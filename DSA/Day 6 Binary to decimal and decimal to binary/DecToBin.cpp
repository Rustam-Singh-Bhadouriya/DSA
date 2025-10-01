#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Hello Welcome to Day 6!\n";
    // This methord is only for small number
    int n = 10;
    
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        /* code */
        int bit = n & 1;
        ans = (bit * pow(10 , i)) + ans;

        n = n >> 1;
        i++;
    }
    
    cout << ans;
    return 0;
}