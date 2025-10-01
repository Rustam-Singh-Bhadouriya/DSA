#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector <int> duplicate(vector<int> nums){
	vector <int> ans = {};
	sort(nums.begin(), nums.end());
	int size = nums.size();
	int i = 0;

	while(i < size){
		if (i+1 < size && nums[i] == nums[i+1])
		{
			/* code */
			ans.push_back(nums[i]);
		}
		i++;
	}
	
	for (int i : ans){
		cout << ans[i] << endl;
	}
	return ans;
}


int main(){
	vector <int> nums = {1,2,5,2,7,4,5};
	// you have to return value who had came more than one in this array

	duplicate(nums);

}