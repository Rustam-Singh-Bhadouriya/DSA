#include <iostream>
using namespace std;

int unique(int arr[] , int n){
	int ans = 0;
	for(int i =0 ; i < n ; i++){
		ans = ans ^ arr[i];
	}
	cout << ans << endl;
	return ans;
}

int main(){
	int arr[5] = {1,2,4,2,1};
	// We are going to use xor trick
	// a ^ a = 0 ; 0 ^ a = a
	// 1^2^4^2^1 = 1/1 2/2 4 = 0^0^4 = 
	unique(arr , 5);
} 