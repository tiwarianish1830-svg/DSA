/*
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int move =0;
        int mini = *min_element(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            move+=abs(mini-nums[i]);
        }
        return move;
    }
};
*/

// most optimal solution
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int mini = *min_element(nums.begin(),nums.end());
        return sum - nums.size()*mini;
    }
};