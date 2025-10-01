#include <iostream>
#include <map>
using namespace std;

int liner(int arr[], int key , int size){

    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            count++;
        }
    }

    return count;
}


int HashTables(int arr[], int key, int size){
    map <int, int> mp;

    for(int i = 0; i < size; i++){
        mp[arr[i]]++;
    }

    return mp[key];
}

int main(){


    // FInd Most Occurence of Array 

    int arr[7] = {1,2,3,3,3,3,4};
    int key = 3;

    // print most occurence of 3 as its 4   


    int LinearSolution = liner(arr, key , 7);
    cout << LinearSolution << endl;

    int HashTableSolution = HashTables(arr, key, 7);
    cout << HashTableSolution << endl;

    return 0;
}