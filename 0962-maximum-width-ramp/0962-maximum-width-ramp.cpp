/* approach1-> brute force
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int ramp =0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] <= nums[j]){
                  ramp = max(ramp, j-i);
                }
            }
        }
        return ramp;
    }
};
*/

// Approach->2

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int>rightmax(n);
        rightmax[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            rightmax[i]=max(rightmax[i+1],nums[i]);
        }
        int ramp =0;
        int i=0; // nums ko dekhega
        int j=0; // rightmax k0
        while(j<n){
           if(i<j && nums[i]>rightmax[j]){
            i++;
           }
           ramp=max(ramp,j-i);
           j++;
        }
        return ramp;
    }
};