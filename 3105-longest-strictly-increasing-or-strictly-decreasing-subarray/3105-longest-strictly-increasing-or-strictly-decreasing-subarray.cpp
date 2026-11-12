class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int result =0;
        for(int i=0; i<nums.size(); i++){
            int inc =1;
            int j=i+1;
            while(j<nums.size() && nums[j]>nums[j-1]){
                inc++;
                j++;
            }
            j = i+1;
            int dec =1;
            while(j<nums.size() && nums[j]<nums[j-1]){
                dec++;
                j++;
            }
            result = max({result,inc,dec});
        }
        return result;
    }
};