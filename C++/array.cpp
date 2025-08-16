#include <iostream>
using namespace std;

int main() {
    // Write your code here
//     int arr[3] = {23,24,25};
//     // int arr[] = {23,24,25}; // same as up
// // Array Index  = 0 , 1, 2
//     // same as c
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n" , arr[i]);
//         // cout<<arr[i]<<endl; // same as up
//     }

    int marks[6];
    
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter Marks for "<<i+1<<"th Student: ";
        cin>>marks[i];
    }
    cout<<"\n";
    for (int i = 0; i < 6; i++)
    {
        cout<<i+1<<"th Student marks out of 100: "<<marks[i]<<endl;
    }
    

    return 0;
}