#include <iostream>
using namespace std;


int binarySearch(int arr[], int size , int key){
	int st = 0;
	int end = size-1;

	int mid = st + (end-st)/2;

	while(st <= end){
		if(arr[mid] == key){
			return mid;
		}

		if ( arr[mid] < key){
			st = mid+1;
		} else{
			end = mid-1;
		}

		mid = st+ (end-st)/2;

	}

	return -1;

}

int main()
{
	/* code */
	// Binary Search is only applies on Sorted Array
	// it can be increasing order
	// or decrieasing order

	int even[6] = {2,4,6,8,12,16};
	int odd[5] = {3,4,7,8,10};

	cout << binarySearch(even , 6 , 12) << endl;
	cout << binarySearch(odd , 5 , 1) << endl;

	
	return 0;
}