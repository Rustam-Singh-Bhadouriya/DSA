#include <iostream>
using namespace std;

int main(){
    cout << "Hello\n";
    int array[] = {1,2,3,4,5,6,7}; 

    // Task print the index of number 2 in array and if N doesnt exit then -1

    int size = sizeof(array)/sizeof(int);

    // A very optimal approach for it
    int N; // -1 and if 2 then 1 and if 3 then 2
    cin >> N;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (array[i] == N)
        {
            /* code */
            index = i;
            break;
        }
        
    }
    
    cout << index;
}