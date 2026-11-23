// by using stl
/*
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end()))return true;
        if(is_sorted(nums.begin(), nums.end(), greater<int>()))return true;
        return false;
    }
};
*/

// 2nd aproach
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase=false;
        bool decrease=false;
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i] < nums[i+1])increase=true;
            if(nums[i] > nums[i+1])decrease=true;
        }
        if(increase== true && decrease==true)return false;
        return true;
    }
};