/* show tle
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j])return nums1[i];
            }
        }
        return -1;
    }
};
*/

// time complexity (O(nlog n + mlog n))
/*
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(auto x:nums1){
            st.insert(x);
        }
        for(auto x:nums2){
            if(st.find(x) != st.end()) return x;
        }
        return -1;
    }
};
*/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0; int j=0;
        while(i<nums1.size() && j< nums2.size()){
            if(nums1[i] == nums2[j]){
                return nums1[i];
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        return -1;
    }
};