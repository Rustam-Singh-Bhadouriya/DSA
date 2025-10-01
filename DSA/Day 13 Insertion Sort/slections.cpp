#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


}

int main(){

    cout << "Hello C++ Sorting" << endl;
    // Selection Sort Revision

    int arr[5] = {6,2,8,4,10};
    int n = 5;
    int swapped = 0;
    int compare = 0;
    for(int i= 0; i < n-1; i++) // Round Counter Start with 0 end at n-1
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) // For Index Counting to left values
        {
            // minIndex = min(arr[minIndex] , arr[j]);
            if (arr[j] < arr[minIndex])
            {
                /* code */
                minIndex = j;
            }
            compare++;
            
        }

        swap(arr[minIndex] , arr[i]);
        swapped++;
    }

    print(arr , n);
    cout << swapped << endl << compare;
    return 0;
}