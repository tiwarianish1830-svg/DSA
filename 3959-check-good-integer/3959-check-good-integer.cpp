class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0;
        int squaresum=0;
        while(n>0){
            int digits=n%10;
            digitsum+=digits;
            squaresum += digits * digits;
            n/=10;
        }
        if(squaresum-digitsum>=50)return true;
        return false;
    }
};