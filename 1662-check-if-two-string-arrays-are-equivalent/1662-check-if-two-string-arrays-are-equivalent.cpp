class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="";
        string m="";
        for(auto x:word1){
            s+=x;
        }
        for(auto x:word2){
            m+=x;
        }
        if(s==m)return true;
        return false;
    }
};