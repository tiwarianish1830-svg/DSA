// by itself time complexity 0(1)
/*
class Solution {
public:
    bool canAliceWin(int n) {
        int alicecount = 0;
        int bobcount = 0;
        if(n < 10) return false;
        while(n > 0) {
            if(n - (10 - alicecount) >= 0) {
                n = n - (10 - alicecount);
                alicecount++;
            }
            else {
                return false;
            }
            if(n - (9 - bobcount) >= 0) {
                n = n - (9 - bobcount);
                bobcount++;
            }
            else {
                return true;
            }
        }
        return true;
    }
};
*/

// code ko thoda chota hai and ye logic hai 
class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        bool alice = true;
        while(n>=stone){
            n -=stone;
            stone--;
            alice=!alice;
        }
        return !alice;
    }
};