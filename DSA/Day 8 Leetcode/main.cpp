#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    } cout << endl;
    
}

int arrSwap(int arr[] , int size){
    for (int i = 0; i < size; i+= 2)
    {
        /* code */
        if(i+1 < size){
            swap(arr[i] , arr[i+1]);
        }
        
\    }
    return *arr;
}

int main(){
    printf("Hello C++!\n");
    int arr[8] = {2,4,3,7,19,76,45,32};
    // Swap alternate it with pointer


    arrSwap(arr , 8);
    
    printArray(arr , 8);
    return 0;
}