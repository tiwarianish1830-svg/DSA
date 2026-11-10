class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        while(i < j) {
            if(nums[i] % 2 == 0) {
                i++;
            }
            else if(nums[j] % 2 != 0) {
                j--;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }
        vector<int> ans;
        int k = 0;
        j = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {
                ans.push_back(nums[k]);
                k++;
            }
            else {
                ans.push_back(nums[j]);
                j--;
            }
        }
        return ans;
    }
};