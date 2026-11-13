class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        for(int i=0; i<arr.size(); i++){
            if(i == arr.size()-1)ans.push_back(-1);
            else{
            int maxi = *max_element(arr.begin() + i + 1, arr.end());
            ans.push_back(maxi);
            }
        }
        return ans;
    }
};