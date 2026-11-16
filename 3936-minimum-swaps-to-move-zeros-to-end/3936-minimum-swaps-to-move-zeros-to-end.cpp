class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int count =0;
        while(i<j){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++,j--;
                count++;
            }else if(nums[i]!= 0)i++;
            else j--;
        }
        return count;
    }
};