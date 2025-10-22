#include <iostream>
using namespace std;

int nth(int p){
    if (p == 0) return 1;
    return 2 * nth(p-1);
}

int main(){
    cout << "Hello C++" << endl;
    cout << nth(20) << endl;
}