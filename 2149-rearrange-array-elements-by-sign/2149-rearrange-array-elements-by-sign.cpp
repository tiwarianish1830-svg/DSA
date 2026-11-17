class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0; i<n; i++){
            if(nums[i]>0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        int j=0;
        int k=0;
        vector<int>ans;
        for(int i=0; i<n/2; i++){
          if(j<pos.size()){
            ans.push_back(pos[j]);
            j++;
          }
          if(k<neg.size()){
           ans.push_back(neg[k]);
           k++;
          }
        }
        return ans;

    }
};