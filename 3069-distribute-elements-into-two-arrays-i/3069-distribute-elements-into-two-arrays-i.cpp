// optimse hai but code maine lamba likh diya hai 
/*
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
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
*/

//
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};