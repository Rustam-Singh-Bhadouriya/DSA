#include <iostream>
using namespace std;

int main(){
    // See Notes

    int a = 4 , b = 6;

    cout << "a & b = " << (a&b) << endl;
    cout << "a | b = " << (a|b) << endl;
    cout << "a ^ b = " << (a^b) << endl;
    cout << "~a = " << (~a) << endl;

    // Now left shift (<<) and Right Shift (>>)

    cout << "17 << 2 = " << (17 << 2) << endl;
    cout << "17 >> 2 = " << (17 >> 2) << endl;

    return 0;
}