#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "Process Done!\n";
}

int main(){
    cout << "Hello C++ Selection Sort"  << endl;
    /*
    
    Selection Sort works like this arr = [6,4,3,5,9]

    i = 0 mean 6 find smallest value ahead of this as 3 and swap
    so it will like this
    [3,4,6,5,9]
    i = 1 mean 4 smallest after it is nothing so it swaps itself
    [3,4,6,5,9]
    i = 2 mean 6 smallest after it is 5 so swap it
    [3,4,5,6,9]
    i = 3 mean 6 but it is smalllest then ahead
    and after we not need to check last value
    and loops runs for n-1 times and a min loop also in that
    

    Space Complexity = O(1)
    Time Complexity = O(n^2)
    */

    int arr[5] = {6,4,3,5,9};
    int n = 5;

    for(int i = 0; i < n - 1 ; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
            
        }

        swap(arr[minIndex] , arr[i]);
    }

    printArray(arr , n);
    
    return 0;
}