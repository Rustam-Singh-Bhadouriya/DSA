#include <iostream>
using namespace std;

void print(int arr[] , int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    cout << "Hello C++ Sorting" << endl;
    int arr[6] = {5,3,8,1,9,14};
    int n = 6;

    /*

    How it Works?
    it works like this arr = [5,3,8,1,9,14]
    it checks i and i + 1
    and in each round its shows that the nth greatest value placed in right place
    [3,5,1,8,9,14] -> [3,1,5,8,9,14] -> [1,3,5,8,9,14] -> as this it will goes n-1
    times
    
    */

    for(int i = 1; i < n; i++){

        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    print(arr, n);

    /*
    More Explation :-
    i is the indicator of round mean how many round have done so it is 1 and n -1
    and j is the index indicator of array 
    why n - i
    bcz if one value placed we just need to check less then round mean 1 round = 1 sort
    so if one sort then why to check? so direct dont check it so from total round we remove round which have do and its actually works
    
    */

    return 0;
}