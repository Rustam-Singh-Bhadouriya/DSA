class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        vector <int> wtd = {};
        int n = arr.size();

        sort(arr.begin() , arr.end());
        for (int i = 0; i < n; i++){
            int count = 1;
            while(i+1 < n && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            wtd.push_back(count);
            
        }
        sort(wtd.begin(), wtd.end());
        for (int i = 1; i < wtd.size(); i++){
            if (wtd[i] == wtd[i-1]){
                return false;
            }
        }

        return true;
    }
};