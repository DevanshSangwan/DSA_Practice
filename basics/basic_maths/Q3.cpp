//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int org = x;
        long rev = 0;
        while (x>0) {
            int cur = x%10;
            rev = rev*10 + cur;
            x = x/10;
        }
        if (rev == org) return true;
        return false;
    }
};