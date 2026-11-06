class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
             int sum1 = accumulate(nums.begin(), nums.begin() + i, 0);
             int sum2 = accumulate(nums.begin() + i + 1, nums.end(), 0);
            if(sum1 == sum2)return i;
        }
        return -1;
    }
};