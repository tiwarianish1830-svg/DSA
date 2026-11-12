class Solution {
public:
    int findMaxK(vector<int>& nums) {
       vector<int>ans;
       for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(nums[i] == -nums[j])ans.push_back(nums[i]);
        }
       }
       if(ans.size()>0)return *max_element(ans.begin(),ans.end());
       return -1;
    }
};