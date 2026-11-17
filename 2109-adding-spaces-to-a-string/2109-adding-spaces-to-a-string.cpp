class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string m="";
        int i=0;
        int j=0;
        while(i<s.size()){
            if(j<spaces.size()){
                if(i==spaces[j]){
                    m+=" ";
                    j++;
                }
            }
            m+=s[i];
            i++;
        }
        return m;
    }
};