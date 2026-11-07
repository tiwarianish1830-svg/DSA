class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        for(auto x:nums){
            mp[x]++;
        }
        
        for(auto x:mp){
            if(x.second>1)ans.push_back(x.first);
        }
        for(int i = 1; i <= nums.size(); i++) {
            if(find(nums.begin(), nums.end(), i) == nums.end()) {
            ans.push_back(i);
         }
       }
        return ans;
    }
};