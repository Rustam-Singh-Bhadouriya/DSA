#include <iostream>
using namespace std;

int change(int *n)
{
    *n = *n + 10;
    return *n;
}

int main()
{
    // Write your code here
    typedef int R; // same as C
    R a = 89;
    int *ptr = &a; 

    cout << (int) ptr << endl; // as 90% same as C
    cout<< (int) &a << endl;
    cout<<a<<endl;
    cout<<"a = "<< *ptr << endl; // 89

    // cout<<change(&a)<<endl;

    change(&a);
    cout << a << endl; // value will change to 99
    cout<<"a = "<< *ptr << endl; // 99

    R c = 2323;
    cout << c << endl;
    return 0;
}