#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int num;
    cout<<"Enter a number for table: ";
    cin>>num;

    for (int i = 1; i <= 10; i++)
    {
        // printf("Hello\n"); we can use printf in cpp
        cout<<num*i<<endl;
    }
    
    return 0;
}