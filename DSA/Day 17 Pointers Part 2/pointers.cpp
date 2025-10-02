#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << *(arr + 4) << endl; // arr points to adress of arr[0]
    int *ptr = &arr[0];
    cout << ptr << endl;
    cout << *ptr << endl;
    // ptr and arr will print same value
    return 0;
}