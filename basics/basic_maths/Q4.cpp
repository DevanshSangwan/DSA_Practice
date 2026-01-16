//You are given a 3-digit number n, Find whether it is an Armstrong number or not
/*
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int org = n;
        int arm = 0;
        while (n>0) {
            arm = arm + pow(n%10,3);
            n = n/10;
        }
        if (org == arm) return true;
        return false;
        
    }
};
*/