#include <iostream>
using namespace std;

int main(){
    cout << "Hello\n";
    int array[] = {1,2,3,4,5,6,7}; // Mean its can only store 10 element
    // array = 1 2 3 4 5 6 7 0 0 0 , 0 0 0 Will also print; so make it only []
    // Nw array = 1 2 3 4 5 6 7 only bcz of [] blank

    // printing arrays
    for(int i : array){
        cout << i << endl;
    }

    // changing value of arrays

    array[1] = 100; // now 1 is 100
    cout << array[1] << endl;
    return 0;
}