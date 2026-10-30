/*
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
     for(int i = 0; i < nums.size(); i++) {
        if(nums[i] % 2 == 0) {
        ans.push_back(nums[i]);
        }
     }

     for(int i = 0; i < nums.size(); i++) {
        if(nums[i] % 2 != 0) {
        ans.push_back(nums[i]);
       }
    }
    return ans;
    }
};
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        int i=0; 
        int j=nums.size()-1;
        while(i<=j){
            if(nums[i] % 2 ==0){
                i++;
            }
            else if(nums[j] % 2 != 0){
                j--;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return nums;
    }
};