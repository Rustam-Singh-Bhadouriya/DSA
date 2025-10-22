#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){

    // Base Case
    if (n == 0|| n == 1) return true;
    if(arr[0] > arr[1]) return false;
    else {
        bool rem = isSorted(arr+1, n-1);
        return rem;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // cout 
    if(isSorted(arr,5)){
        cout << "This is Sorted!" << endl;
    } else{
        cout << "This is not Sorted" << endl;
    }
    return 0;
}