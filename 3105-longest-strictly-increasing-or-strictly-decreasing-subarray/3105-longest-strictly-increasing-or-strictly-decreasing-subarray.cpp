// ye toh brute force wala hai shayad
/*
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
*/

// optimal solution

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int result =1;
        int inc =1;
        int dec =1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                inc++;
                dec =1;
                result =max(result,inc);
            }else if(nums[i]<nums[i-1]){
                dec++;
                inc =1;
                result = max(result,dec);
            }else{
                inc =1;
                dec =1;
            }
        }
        return result;
    }
};