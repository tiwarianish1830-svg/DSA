// by itself time complexity 0(1)
/*
class Solution {
public:
    bool canAliceWin(int n) {
        int alicecount = 0;
        int bobcount = 0;
        while(n > 0) {
            if(n >= 10 - 2 * alicecount) {
                n -= (10 - 2 * alicecount);
                alicecount++;
            }
            else {
                return false;
            }
            if(n >= 9 - 2 * bobcount) {
                n -= (9 - 2 * bobcount);
                bobcount++;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
*/

/*
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
*/

//
class Solution {
public:
    bool canAliceWin(int n) {
        int take=10;
        int step = 0;
        while(n>=take){
            n -=take;
            take--;
            step++;
        }
        if(step % 2 != 0)return true;
        return false;
    }
};