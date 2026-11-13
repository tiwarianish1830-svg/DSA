// maine kya socha tha jo tle lag gaya sabse pehle max element pao fir i =0 sai arr[i] == max and j=size-1 and arr[j] == max tak agar i==j ho and i!= 0 and j!=size-1 tph true nhi false;
/*
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int i=0;
        int j = arr.size()-1;
        int peak = *max_element(arr.begin(),arr.end());
        while(arr[i] !=peak){
            if(arr[i]<arr[i+1])i++;
        }
        while(arr[j] != peak){
            if(arr[j-1]>arr[j])j--;
        }
        if(i==j && i!=0 && j!= arr.size()-1)return true;
        return false;
    }
};
*/


// time complexity 0(n)
/*
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
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
*/

// optimal solution
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int i=0;
        int j = arr.size()-1;
        while(i<j){
            if(arr[i]<arr[i+1])i++;
            else if(arr[j-1]>arr[j])j--;
            else break;
        }
        if(i==j && i!=0 && j!= arr.size()-1)return true;
        return false;
    }
};