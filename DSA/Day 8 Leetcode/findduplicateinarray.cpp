#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/* code */
	vector <int> arr = {1,2,3,4,3};
	int i = 0;
	sort(arr.begin(), arr.end());
	while( i < 5){
		if (i+1 < 5 && arr[i] == arr[i+1])
		{
			/* code */
			cout << "True\n";
			return true;
		}
		i++;
	}
	cout << "false\n";
	return false;
	// return 0;
}