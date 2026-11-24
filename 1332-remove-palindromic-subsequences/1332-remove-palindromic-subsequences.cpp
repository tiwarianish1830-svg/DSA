class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0,j=s.size()-1;
        bool ispalindrom=true;
        while(i<j){
            if(s[i]==s[j]){
                i++,j--;
            }else{
                return 2;
            }
        }
        return 1;
    }
};