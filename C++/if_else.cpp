#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int a;
    cout<<"Enter number: ";
    cin>>a;
    // rogical oprator && and || or not !
    if (a>150 || a<1)
    {
        cout<<"Invalid age!"<<endl;
    }

    else if (a<18)
    {
        cout<<"You can not drive";
    }
    
    else
    {
        cout<<"You can Drive"<<endl;
    }
        
    return 0;
}