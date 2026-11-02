/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>triplet;

        for(int i=0 ; i<n; i++){
            int tar = -nums[i];
            set<int>s;
            for(int j =i+1; j<n; j++){
                int third = tar - nums[j];

                if(s.find(third) != s.end()){
                vector<int>trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                triplet.insert(trip);
            }
            s.insert(nums[j]);
        }
      }
      
    vector<vector<int>>ans(triplet.begin(), triplet.end());
      return ans;
    }
};
*/


// by hashing -> ye maine apne sai nhi kiya hai 
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> triplet;
        for(int i = 0; i < nums.size(); i++) {
            unordered_map<int,int> mp;
            for(int j = i + 1; j < nums.size(); j++) {
                int need = 0 - nums[i] - nums[j];
                if(mp.find(need) != mp.end()) {
                    vector<int> temp = { nums[i], nums[mp[need]],nums[j] };
                    sort(temp.begin(), temp.end());
                   triplet.insert(temp);
                }
                  mp[nums[j]] = j;
            }
        }
        vector<vector<int>> ans(triplet.begin(), triplet.end());
        return ans;
    }
};
*/

// optimal solution 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i>0 &&  nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k =n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0) j++;
                else if(sum>0)k--;
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k] == nums[k+1])k--;
                }
            }
        }
        return ans;
    }
};