//Given an integer n. Your task is to calculate the sum of all natural numbers from 1 up to n (inclusive). If n is 0, the sum should be 0.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findSum(int n) {
        // code here
        if (n==1) return 1;
        return findSum(n-1) + n;
    }
};
