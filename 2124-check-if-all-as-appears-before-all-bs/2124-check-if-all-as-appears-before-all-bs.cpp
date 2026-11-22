// my approach
/*
class Solution {
public:
    bool checkString(string s) {
        if(s.find('b') == string::npos) return true;
        if(s.find('a') == string::npos) return true;
        int firstb=-1;
        int lasta=-1;
        int n = s.size();
        for(int i=0; i<n;i++){
            if(s[i]=='b' && firstb==-1){
                firstb=i;
            }
            if(s[i]=='a')
            lasta=i;
        }
        if(lasta<firstb)return true;
        return false;
    }
};
*/

// 1st approach
class Solution {
public:
    bool checkString(string s) {
        int firstb=-1;
        int lasta=-1;
        int n = s.size();
         for(int i=0; i<n;i++){
            if(s[i]=='b' && firstb==-1){
                firstb=i;
            }
            if(s[i]=='a')
            lasta=i;
        }
        if(lasta==-1 || firstb==-1)return true;
        if(lasta<firstb)return true;
        return false;
    }
};