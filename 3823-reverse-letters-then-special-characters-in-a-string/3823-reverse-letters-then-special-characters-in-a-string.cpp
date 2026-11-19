class Solution {
public:
    string reverseByType(string s) {
       string ans1="";
       string ans2="";
       for(int i=0; i<s.size(); i++){
        if(isalpha(s[i]))ans1+=s[i];
        else ans2+=s[i];
       }
       reverse(ans1.begin(),ans1.end());
       reverse(ans2.begin(),ans2.end());
       int j=0,k=0;
       for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            s[i]=ans1[j];
            j++;
        }else{
            s[i]=ans2[k];
            k++;
        }
       }
       return s;
    }
};