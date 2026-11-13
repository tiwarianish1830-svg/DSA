/*
// time complexity 0(n2)because of *maxi_element

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
*/

// iska bhi 0(n2) but dono main soch paaya
/*
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int i=0;
        int maxi = -1;
        while(i<arr.size()){
        if(i==arr.size()-1)ans.push_back(-1);
        else{
            int j=i+1;
        while(j<arr.size()){
            maxi = max(maxi,arr[j]);
            j++;
        }
         ans.push_back(maxi);
        }
        i++;
        maxi =-1;
        }
        return ans;
    }
};
*/


// o(n)-> time complexity
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        for(int i=arr.size()-1; i>=0; i--){
            int temp = arr[i];
            arr[i]=maxi;
            maxi =max(maxi,temp);
        }
        return arr;
    }
};