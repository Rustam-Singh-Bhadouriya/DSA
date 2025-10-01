#include <iostream>
using namespace std;

int main(){
    cout << "Hello\n";
    int array[5] = {1,2,3,4,5};

    int *st = &array[0];
    int *end = &array[4];

    while(*st < *end){
        int temp = *st;
        *st = *end;
        *end = temp;
        *st++;
        *end--;
    }

    for(int i : array){
        cout << i << " ";
    }

    return 0;
}