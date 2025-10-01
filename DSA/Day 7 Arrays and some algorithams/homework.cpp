#include <iostream>
using namespace std;

int arrSum(int arr[] , int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += arr[i];
    }
    return sum;
    
}

int main(){
    cout << "Hello\n";
    int array[5] = {2 , 7 , 1 , -4 , 11}; 
    cout << arrSum(array , 5 );


}
