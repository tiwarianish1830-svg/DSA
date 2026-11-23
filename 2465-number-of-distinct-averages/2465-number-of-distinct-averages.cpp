class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>st;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()/2){
            int j=nums.size()-1;
            double avg = (nums[i]+nums[j])/2.0;
            st.insert(avg);
            nums.erase(nums.begin() + i);
            nums.pop_back();
        }
        return st.size();
    }
};