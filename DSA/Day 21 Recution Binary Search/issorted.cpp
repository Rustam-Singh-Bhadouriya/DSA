#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){

    bool ans = true;
    for(int i=0; i<n-1; i++){
        // for(int j = )
        if (arr[i] > arr[i+1])
        {
            /* code */
            // ans = true;
            // rretun
            return false;

        }
    }

    return true;
}

int main(){
    int arr[5] = {1,7,3,4,5};
    // cout 
    if(isSorted(arr,5)){
        cout << "This is Sorted!" << endl;
    } else{
        cout << "This is not Sorted" << endl;
    }
    return 0;
}