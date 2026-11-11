class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i=0;
        int count =0;
        while(i<nums.size()){
            int temp = nums[i];
            int number =0;
            while(temp !=0){
            int digits = temp%10;
            number++;
            temp/=10;
            }
            if(number %2==0)count++;
            i++;
        }
        return count;
    }
};