#include <stdio.h>
#include <stdlib.h>


void push_back(int arr[] , int value){
    arr = realloc(arr , 1*sizeof(int));
    int size = sizeof(*arr)/sizeof(int);
    arr[size-1] = value;
}

int main(){
    int array[7] = {1,2,3,4,5,6,7}; 
    // Adding Value at the end of array with DP 
    push_back(array, 8);


    for(int i = 0; i < 8; i++){
        printf("%d\n" , array[i]);
    }
    return 0;
}