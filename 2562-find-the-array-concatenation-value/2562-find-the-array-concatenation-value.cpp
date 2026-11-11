class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans =0;
        int i=0;
        int j =nums.size()-1;
        while(i<j){
            string s = to_string(nums[i]) + to_string(nums[j]);
           ans += stoi(s);
           i++;
           j--;
        }
        if(i==j)ans+=nums[i];
        return ans;
    }
};