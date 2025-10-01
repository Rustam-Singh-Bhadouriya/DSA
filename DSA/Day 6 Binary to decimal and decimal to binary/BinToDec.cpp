#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Hello Welcome to Day 6!\n";
    // Binary to Decimal
    // Formuls = 2 power numberIndex
    int n;
    cin >> n;
    int ans = 0 , i = 0;
    while (n != 0)
    {
        /* code */
        int digit = n % 10;

        if(digit == 1){
            ans = ans + pow(2,i);
        }

        n /= 10;
        i++;
    }
    cout << ans;

}