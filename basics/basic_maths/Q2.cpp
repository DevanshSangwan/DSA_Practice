//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0
/*
class Solution {
public:
    int reverse(int x) {
        long lim = pow(2,31);
        bool neg = false;
        long n = x;
        if (x<0) {
            n = x;
            n = -n;
            neg = true;
            } 
        long rev = 0;
        while (n>0) {
            int cur = n%10;
            n = n/10;
            rev = rev*10 + cur;
        }
        if (lim < rev) return 0;
        if (neg) return -rev;
        return rev;
    }
};
*/