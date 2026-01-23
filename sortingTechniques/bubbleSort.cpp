#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v = {34,23,56,67,34,12,33,66,324,12,5,67};
    int len = v.size();
    for (int i=0; i<len-1; i++) {
        bool swapFlag = 0;
        for (int j=0; j<len-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j],v[j+1]);
                swapFlag = 1;
            }
        }
        if (swapFlag == 0) break;
    }
    for (auto it : v) {
        cout << it << "\t";
    }
    cout << endl;
    return 0;
}