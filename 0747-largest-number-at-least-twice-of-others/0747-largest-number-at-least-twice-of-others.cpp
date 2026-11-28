class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int maxindex=-1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==maxi){
                maxindex=i;
                break;
            }
        }
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-2]*2 > maxi)return -1;
        return maxindex;
    }
};