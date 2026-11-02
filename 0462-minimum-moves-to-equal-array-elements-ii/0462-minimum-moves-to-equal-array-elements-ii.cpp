// time complexity O(nlogn).
/*
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int move =0;
        int mid = nums[nums.size()/2];
        for(int i=0; i<nums.size(); i++){
            move+=abs(nums[i]-mid);
        }
        return move;
    }
};
*/


// bss for loop mei changes kr dunga ham pure array mei traverse krenge half mei krenge aur mid kai pehle aur baad waale sab sai excess kr lunga

/*
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int move =0;
        sort(nums.begin(),nums.end());
        int mid = nums[nums.size()/2];
        for(int i=0; i<nums.size()/2; i++){
            move += abs(nums[i]-mid);
            move += abs(nums[nums.size()-i-1]-mid);
        }
        return move;
    }
};
*/

// optimal solution
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        nth_element(nums.begin(),nums.begin()+n/2,nums.end());
        int mid = nums[n/2];
        int move =0;
        for(int i=0; i<n/2; i++){
            move +=abs(nums[i]-mid);
            move +=abs(nums[n-i-1]-mid);
        }
        return move;
    }
};