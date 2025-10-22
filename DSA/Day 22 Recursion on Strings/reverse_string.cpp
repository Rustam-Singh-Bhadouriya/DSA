#include <iostream>
using namespace std;

void reverseLoop(string &arr, int n){
    int s = 0, e = n - 1;
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}


void reverseRecursion(string &arr, int s, int e){
    // Base Case
    if(s>e) return ;

    // One Step Solve
    swap(arr[s],arr[e]);
    s++;
    e--;

    reverseRecursion(arr, s, e);
}


int main(){
    // We know how to reverse a array with loops but 
    // We are going to solve it with Recursion

    string name = "Rustam";
    cout << name << endl;

    reverseLoop(name, name.length());
    cout << name << endl;

    string name2 = "Yup";
    cout << name2 << endl;

    reverseRecursion(name2, 0, name2.length()-1);
    cout << name2 << endl;
}