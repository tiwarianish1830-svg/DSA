class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int temp = k;
            if(x.second>k){
                while(temp!=0){
                    ans.push_back(x.first);
                    temp--;
                }
            }
                if(x.second ==k){
                    while(temp !=0){
                    ans.push_back(x.first);
                    temp--;
                    }
                }
                if(x.second <k){
                    while(x.second !=0){
                        ans.push_back(x.first);
                        x.second--;
                    }
                }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};