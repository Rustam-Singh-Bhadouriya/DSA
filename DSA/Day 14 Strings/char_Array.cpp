#include <iostream>
using namespace std;

void print(char arr[], int n){
    // for(int i=0; i<n; i++){
    //     cout << arr[i];
    //     if(arr[i+1] == '\0') break;
    // }
    int i = 0;
    while(i < n && arr[i] != '\0'){
        cout << arr[i]; 
        i++;
    }
    cout << endl;
}

int main(){
    printf("Hello C++....\n");
    cout << "Hello C++ Cout = C + Out\n";

    char name[20];
    cin >> name;

    print(name, 20);
    cout << name << endl;
    cout << '\0' << endl;

    return 0;
}