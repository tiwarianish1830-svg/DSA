class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int>ans(n,INT_MAX);
        int count = INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]==c)count=0;
            else if(count != INT_MAX)count++;
            ans[i]=count;
        }
        count = INT_MAX;
        for(int j=n-1; j>=0 ; j--){
            if(s[j]==c)count=0;
            else if(count != INT_MAX)count++;
            ans[j] = min(ans[j], count);
        }
        return ans;
    }
};