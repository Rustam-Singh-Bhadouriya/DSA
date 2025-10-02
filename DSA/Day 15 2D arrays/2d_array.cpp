#include <iostream>
using namespace std;

// void print(int arr[][], int n){
//     for(int i = 0; i < n; i++){

//    
// }
int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}

};

int array_extern[10] = {1,2,3,4,5,6,7,8,9};

namespace print
{
    // cout << ""
    extern int array_extern;

} // namespace print

using namespace print;

int main(){
    cout << "Well C++\n";
    // int arr[3*3] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++)
    {
        for(int j= 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // print(arr,9);
    return 0;
}