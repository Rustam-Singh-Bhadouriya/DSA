#include <iostream>
using namespace std;

int fibonacci(int n){
    
    if(n == 0) return 0;
    else if(n == 1) return 1;
    int ans = fibonacci(n-1) + fibonacci(n-2);
    cout << ans << " ";
    return ans;
}

int main(){
    int n = 5;
    // cout << fibonacci(n) << endl;
    // fibonacci(n);
    for (int i = 0; i < n; ++i){
        cout << fibonacci(i) << " ";

    }
    cout << endl;

}