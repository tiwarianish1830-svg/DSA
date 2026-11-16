class Solution {
public:
    string reversePrefix(string s, int k) {
       for(int i=0; i<s.size(); i++){
        if(i==k-1){
            reverse(s.begin(), s.begin() + i + 1);
        }
       }
       return s;
    }
};