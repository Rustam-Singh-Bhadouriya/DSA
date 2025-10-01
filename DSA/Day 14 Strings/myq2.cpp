#include <iostream>
#include <map>
using namespace std;

int length(char arr[]){
    int count = 0;
    int i = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }

    return count;
}

void solution(char name[], int size){
    map<char,int> p;

    for(int i = 0; i < size; i++){
        p[name[i]]++;
    }

    // for()
    char ans = ' ';
    int max = 1;
    for(auto x : p){
        if(x.second > max){
            ans = x.first;
            max = x.second;
        }
    }

    cout << ans << endl;

}

int main(){
    char name[20] = "rrrsooska";
    // Print Char Which had Most Time Then others
    // Hint :- use hashmap and Linear traversel
    // cout << length(name) << endl
    int len = length(name);
    solution(name,len);
    return 0;
}