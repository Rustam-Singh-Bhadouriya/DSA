#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &nums, int Value){
    int s  = 0, e = nums.size()-1;
    int ans = -1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if (nums[mid] == Value)
        {
            /* code */
            ans = mid;
            e = mid - 1; // to see what is first Occurence before it
        }

        else if (nums[mid] < Value)
        {
            /* code */
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        
        
    }

    return ans;
}

int lastOcc(vector<int> &nums, int Value){
    int s  = 0, e = nums.size()-1;
    int ans = -1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if (nums[mid] == Value)
        {
            /* code */
            ans = mid;
            s = mid + 1; // to see what is first Occurence before it
        }

        else if (nums[mid] < Value)
        {
            /* code */
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        
        
    }

    return ans;
}

int main(){

    // Problem =  first and last occureence of a numebr...
    vector<int> arr = {2,3,5,5,5,5,6};
    int ValueSearch = 5;


    cout << firstOcc(arr, ValueSearch) << endl;
    cout << lastOcc(arr, ValueSearch) << endl;
    return 0;
}