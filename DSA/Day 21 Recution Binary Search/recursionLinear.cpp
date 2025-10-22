#include <iostream>
using namespace std;

bool present(int arr[], int n, int k){
    // base case
    if (n == 0){
        return false;
    }
    if (arr[0] == k){
        return true;
    }

    bool ans = present(arr+1, n-1, k);
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // cout 
    if(present(arr,5, 4)){
        cout << "Present" << endl;
    } else{
        cout << "Absent" << endl;
    }
    return 0;
}