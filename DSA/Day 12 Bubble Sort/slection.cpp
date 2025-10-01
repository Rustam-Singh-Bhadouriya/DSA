#include <iostream>
using namespace std;

void print(int arr[] , int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << "Hello C++ Sorting" << endl;

    int arr[5] = {3,1,7,2,10};
    int n = 5;

    for(int i = 0; i < n - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n ; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        }

        swap(arr[i] , arr[minIndex]);
    }

    print(arr , 5);
    return 0;
}