class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        int prevcount=0;
        int currcount=1;
        for(int i=1; i<s.size(); i++){
            if(s[i-1]==s[i]){
                currcount++;
            }else{
                ans+=min(prevcount,currcount);
                prevcount=currcount;
                currcount=1;
            }
        }
        ans+=min(prevcount,currcount);
        return ans;
    }
};