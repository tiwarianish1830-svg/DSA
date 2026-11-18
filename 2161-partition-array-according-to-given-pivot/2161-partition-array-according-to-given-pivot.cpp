class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>vec1;
        vector<int>vec2;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot)vec1.push_back(nums[i]);
            if(nums[i]>pivot)vec2.push_back(nums[i]);
            if(nums[i]==pivot)count++;
        }
        vector<int>ans;
        int i=0;
        while(i<vec1.size()){
            ans.push_back(vec1[i]);
            i++;
        }
        while(count !=0){
            ans.push_back(pivot);
            count--;
        }
        i=0;
        while(i<vec2.size()){
            ans.push_back(vec2[i]);
            i++;
        }
        return ans;
    }
};