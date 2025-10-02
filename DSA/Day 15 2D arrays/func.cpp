#include <iostream>
using namespace std;

bool exits(int arr[][3], int k){
    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == k){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}

    };
    // passing 2D arrays to function
    // in function we declare it as int arr[][any value] in the second box a value needs

    cout << exits(arr,13) << endl;
    return 0;
}