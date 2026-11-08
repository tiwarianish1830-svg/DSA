/*
// show tle
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long split =0;
        for(int i=0; i<nums.size()-1; i++){
            long long leftsum =0;
            long long rightsum =0;
            for(int j=0; j<=i; j++){
                leftsum +=nums[j];
            }
            for(int k=i+1; k<nums.size(); k++){
                rightsum += nums[k];
            }
            if(leftsum>=rightsum)split++;
        }
        return split;
    }
};
*/

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long split =0;
        long long leftsum =0;
        long long sum = accumulate(nums.begin(),nums.end(),0LL);
        for(int i=0; i<nums.size()-1; i++){
            leftsum += nums[i];
            long long rightsum = sum-leftsum;
            if(leftsum>=rightsum)split++;
        }
        return split;
    }
};