class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum =INT_MAX;
       for(int i = 0; i < nums.size(); i++) {
        for(int j = i; j < nums.size(); j++) {
            vector<int> ans;
         for(int k = i; k <= j; k++) { 
                ans.push_back(nums[k]);
                }
                   if(ans.size()>=l && ans.size()<=r){
                    int currsum = accumulate(ans.begin(),ans.end(),0);
                    if(currsum>0){
                        sum = min(sum,currsum);
                    }
                }
            }
        }
        if(sum == INT_MAX)return -1;
        return sum;
    }
};