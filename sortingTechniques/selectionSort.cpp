#include <bits/stdc++.h>
using namespace std;

void selSort(vector <int> :: iterator str, vector <int> :: iterator end) {
    if (str == end) return;
    auto temp = str;
    auto least = temp;
    while (temp != end+1) {
        if (*temp < *least) least = temp;
        temp++;
    }
    int cont = *least;
    *least = *str;
    *str = cont;
    selSort(str+1, end);
    return;
}


int main() {
    vector <int> v = {54,23,1,78,90,45,33,88,56,11,45,23};
    auto str = v.begin();
    auto end = v.end();
    selSort(str, end-1);
    for (auto it : v) {
        cout << it << "\t";
    }
    cout << endl;
    return 0;
}