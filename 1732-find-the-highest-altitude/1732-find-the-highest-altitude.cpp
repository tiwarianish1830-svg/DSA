class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int highaltitude=0;
        for(int i=0; i<gain.size();i++){
            ans+=gain[i];
            highaltitude=max(highaltitude,ans);
        }
        return highaltitude;
    }
};