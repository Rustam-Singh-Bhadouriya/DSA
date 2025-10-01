#include <iostream>
using namespace std;

int main(){
    cout << "Hello\n";
    int array[5] = {1,2,3,4,5};
    int start = 0 , end = 4; // end = lengthof(array) - 1
    
    for (int i = 0; i < 5; i++)
    {
            int temp = array[i];
            array[i] = array[end];
            array[end] = temp;
            start++;
            end--;
            if (start > end)
            {
                /* code */
                break;
            }
            
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    

}