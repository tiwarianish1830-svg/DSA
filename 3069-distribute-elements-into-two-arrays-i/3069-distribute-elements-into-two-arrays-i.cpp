class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n =nums.size()-1;
        vector<int>ans;
        vector<int>vec1;
        vector<int>vec2;
        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(vec1.back()>vec2.back()){
                vec1.push_back(nums[i]);
            }else{
                vec2.push_back(nums[i]);
            }
        }
        int j=0;
        while(j<vec1.size()){
            ans.push_back(vec1[j]);
            j++;
        }
        int k=0;
        while(k<vec2.size()){
            ans.push_back(vec2[k]);
            k++;
        }
        return ans;
    }
};