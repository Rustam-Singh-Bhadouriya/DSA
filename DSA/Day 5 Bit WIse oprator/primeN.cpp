#include <iostream>
using namespace std;


int main(){

    cout << "prime Number\n";

    int n;
    cout <<"Enter Number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            /* code */
            printf("Not Prime!\n");
            return 0;
        }
        else{
            continue;
        }
        
    }
    cout << "prime";
    return 0;
}