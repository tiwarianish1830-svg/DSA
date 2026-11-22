class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<long long>ans;
        for(int i=0; i<nums.size();i++){
            long long sum=0;
            for(int j=i; j<nums.size();j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        long long result=0;
        for(int i=left-1;i<=right-1;i++){
           result = (result + ans[i]) % MOD;
        }
        return result;
    }
};