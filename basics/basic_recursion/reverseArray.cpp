//You are given an array of integers arr[]. You have to reverse the given array.

#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        auto it1 = arr.begin();
        auto it2 = arr.end()-1;
        while (it1<it2) {
            int temp = *it1;
            *it1 = *it2;
            *it2 = temp;
            it1++;
            it2--;
        }
    }
};
*/

void reverse(vector <int> :: iterator str, vector <int> :: iterator end) {
    if (str >= end) return;
    int temp = *str;
    *str = *end;
    *end = temp;
    reverse(str+1, end-1);
    return;
}

int main() {
    vector <int> arr = {12,32,34,45,56,67,22};
    reverse(arr.begin(), arr.end()-1);
    for (auto it : arr) {
        cout << it << "\t";
    }
    cout << endl;
    return 0;
}