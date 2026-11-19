class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==key)ans.push_back(i);
        }
        vector<int>result;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<ans.size(); j++){
                if(abs(i-ans[j])<=k){
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};