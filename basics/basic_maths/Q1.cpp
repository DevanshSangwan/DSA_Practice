//Given a natural number n. You have to find the number of digits in it and return it.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 12345;
    int dig = 0;
    do {
        n=n/10;
        dig++;
    } while (n>0);
    cout << dig << endl;

    return 0;
}