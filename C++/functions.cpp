#include <iostream>
using namespace std;

int Sum(int x , int y)
{
    int c;
    c = x + y;
    return c;
}

int main() {
    // Write your code here
    // taking inputs
    int a,b;
    cout<<"Enter Number 1: ";
    cin>>a;
    cout<<"Enter Number 2: ";
    cin>>b;

    // output of function
    cout<<"Function return: "<<Sum(a,b);

    return 0;
}