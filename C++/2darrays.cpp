#include <iostream>
using namespace std;

int main() {
    // Write your code here
    //  arr[rows][colums]
    // int arr[2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // } ;
    // //              i < rows
    // for (int i = 0; i < 2; i++)
    // {
    //     //              j < colums
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"value on: "<<i<<" "<<j<<" is: "<<arr[i][j]<<endl;
    //     }
        
    // }
    
    // arr 2d inputs

    int arr[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter Value of: "<<i<<" , "<<j<<" : ";
            cin>>arr[i][j];
        }
        
    }
    cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        //              j < colums
        for (int j = 0; j < 3; j++)
        {
            cout<<"value on: "<<i<<" "<<j<<" is: "<<arr[i][j]<<endl;
        }
        
    }
    

    return 0;
}