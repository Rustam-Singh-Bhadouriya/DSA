#include <iostream>
#include <climits>
using namespace std;

int maxmin(int arr[] , int size){
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
        if (arr[i] < min)
        {
            /* code */
            min = arr[i];
        }
    }
    // return min , max;
    cout << min << endl;
    cout << max << endl;
    
}


int main(){
    int arr[] = {1,3,7,2,5};
    // cout << maxmin(arr , 5);
    maxmin(arr , 5);
    cout << arr;
    
    return 0;
}