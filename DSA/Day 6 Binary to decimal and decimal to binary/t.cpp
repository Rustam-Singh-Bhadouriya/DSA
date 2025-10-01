#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Hello Welcome to Day 6!\n";
    // This methord works for all number big and small
    // As well with low time complexity and much with DSA
    int n = 10000;
    vector <int> v = {};

    while (n != 0)
    {
        /* code */
        int reminder = n & 1;
        v.push_back(reminder);

        n /= 2;
    }

    int i = v.size();
    while (i != 0)
    {
        /* code */
        cout << v.back();
        v.pop_back();
        i--;
    }
    
}