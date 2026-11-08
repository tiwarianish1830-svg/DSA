class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        for(auto x:v){
            if(x.first == x.second)return x.first;
        }
       return -1;
    }
};