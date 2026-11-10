class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long subarray =0;
        int n = nums.size();
        int i=0;
        while(i<n){
            long long len =0;
            if(nums[i]==0){
                while(i<n && nums[i]==0){
                    len++;
                    i++;
                }
            }else{
                i++;
            }
            subarray += (len * (len + 1)) / 2;
        }
        return subarray;
    }
};