#include <iostream>
using namespace std;

int counting(int p){
    if (p == 1) return 1;
    cout << counting(p-1) << " ";
}

int main(){
    cout << "Hello C++" << endl;
    // cout << counting(100) << endl;
    counting(5);
}