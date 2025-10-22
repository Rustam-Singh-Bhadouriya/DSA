#include <iostream>
using namespace std;


void update1(int n){
    n++;
} // this will not update value

void update2(int& n){
    n++;
} // this will change value of n cuz this is same variable with another name!

int main(){
    

    /*
        In genral it can use for passing in functions 
        to change value 
    */

    int n =6;

    cout << "Before update1 " << n << endl;
    update1(n);
    cout << "After Update1 "  << n << endl;
    update2(n);
    cout << " After UPdate2 " << n << endl;

    return 0;
}