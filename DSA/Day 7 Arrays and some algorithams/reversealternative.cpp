#include <iostream>
using namespace std;

int main(){
    cout << "Hello\n";
    int array[5] = {1,2,3,4,5};
    int reversearray[5] = {};
    int endPointer = 4;
    int startPointer = 0;
    while (endPointer >= 0)
    {
        /* code */
        reversearray[startPointer] = array[endPointer];
        endPointer--;
        startPointer++;
    }
    
    
    for (int i = 0; i < 5; i++)
    {
        cout << reversearray[i] << endl;
    }

}