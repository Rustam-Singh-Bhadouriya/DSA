#include <iostream>
using namespace std;

int sum(int arr[], int n){

    // Base Case
    if(n == 0 || n == 1) return arr[n-1];
    
    return arr[0] + sum(arr+1, n-1);
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // cout 
    cout << sum(arr,5) << endl;
    return 0;
}