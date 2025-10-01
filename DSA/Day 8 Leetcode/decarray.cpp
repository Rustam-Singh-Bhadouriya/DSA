#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    } cout << endl;
    
}

int decArray(int arr[] , int size){
    sort(*arr , size);
    return *arr;
}

int main(){
    printf("Hello C++!\n");
    int arr[8] = {2,4,3,7,19,76,45,32};
    // Swap alternate it with pointer


    decArray(arr , 8);
    
    printArray(arr , 8);
    return 0;
}