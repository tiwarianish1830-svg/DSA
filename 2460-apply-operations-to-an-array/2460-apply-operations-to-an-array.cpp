class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }
        int zero =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)zero++;
        }
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0)ans.push_back(nums[i]);
        }
        while(zero>0){
            ans.push_back(0);
            zero--;
        }
        return ans;
    }
};