#include <iostream>
using namespace std;


int BinarySearch(int arr[], int low, int high , int target){
    int mid = low + (high-low)/2;

    if(low > high) return -1;
    if(arr[mid] == target) return mid;
    if(arr[mid] < target){
        return BinarySearch(arr, mid+1, high, target);
    } else{
        return BinarySearch(arr, low, mid-1, target);
    }

    return -1;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    // Search Binary Search (5)

    int target = 5;
    int low = 0, high = 6;
    cout << " Index Of " << target << " is => "<< BinarySearch(arr, low , high, target) << endl;
}