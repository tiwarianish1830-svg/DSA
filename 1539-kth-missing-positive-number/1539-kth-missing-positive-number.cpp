class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        for(long long i=0; ;i++){
            if(find(arr.begin(), arr.end(), i) == arr.end())ans.push_back(i);
            if(ans.size()>k)break;
        }
        return ans[ans.size() - 1];
    }
};