class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int peak = *max_element(arr.begin(),arr.end());
        int i=0;
        int j = arr.size()-1;
        while(i < arr.size() - 1 && arr[i]<arr[i+1]){
                i++;
        }
         while(j > 0 && arr[j-1] > arr[j]) {
            j--;
        }
        if(i == j && i != 0 && i != arr.size()-1) {
            return true;
        }
        return false;
    }
};