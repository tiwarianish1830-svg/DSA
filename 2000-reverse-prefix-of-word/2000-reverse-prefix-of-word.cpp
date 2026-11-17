class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int j=0;
        while(j<word.size()){
            if(word[j]==ch){
                int k =j;
                while(i<k){
                swap(word[i],word[k]);
                    i++;
                    k--;
                }
                return word;
            }
            j++;
        }
        return word;
    }
};