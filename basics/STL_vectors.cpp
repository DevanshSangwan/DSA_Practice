#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.emplace_back(3);
    cout << v[0] << "\t" << v[1] << endl;
    
    vector <pair<int, char>> pv;
    pv.push_back({1,'m'});
    pv.emplace_back(2,'n');         //no need of curly brackets in emplaceback
    cout << pv[0].first << "\t" << pv[0].second  << "\n" << pv[1].first << "\t" << pv[1].second << endl;

    vector <int> v1(5,100);
    // v1 is initialized as {100,100,100,100,100} ie, 5 instances of 100

    vector <int> v2(5);
    // v2 initialized with 5 zeros, or 5 garbage values (depending upon compiler)

    vector <int> v3(v1);
    // v1 is copied into v3;

    vector <pair<int,char>> v4(pv);
    // pv is copied into v4;

    vector <int> v5 = {12,23,34,45,56,67};
    vector <int> :: iterator it = v5.begin();   //points to first element in v5
    vector <int> :: iterator it1 = v5.end();    //points to the memory location after last element in v5
    cout << *it << "\t" << *it1 << "\t" << *(--it1) << endl;

    for (vector<int>::iterator it2 = v1.begin(); it2 != v1.end(); it2++) {  //crude implementation of iterators in for loop
        cout << *it2 << "\t";
    } cout << endl;

    for (auto it3 = v2.begin(); it3 != v2.end(); it3++) {
        cout << *it3 << "\t";
    } cout << endl;

    for (auto it4 : pv) {       // it4 is not really an "iterator", it refers to the elements of pv (not their locations like an iterator does)
        cout << it4.first << "\t" << it4.second << endl;
    }

    for (auto it5 : v5) {
        cout << it5 << "\t";
    } cout << endl;

    v1.erase(v1.begin()+2);     //erases (deletes) 3rd (index 2) element of v1
    v2.erase(v2.begin()+1, v2.begin()+4);   //erases elements on indices 1,2,3 (starting index included, ending index not included)

    vector <int> v6(2,100); //{100,100}
    v6.insert(v6.begin()+1,50); //{100,50,100}
    v6.insert(v6.begin()+2, 2, 30); //{100,50,30,30,100}

    vector <int> v7(3, 300);
    v6.insert(v6.begin()+2, v7.begin(), v7.end());  //{100,50,300,300,300,30,30,100}

    for (auto it6 : v6) {
        cout << it6 << "\t";
    }cout << endl;

    cout << v6.size() << endl;  //prints number of elements in the vector
    
    v6.pop_back(); // deletes the last element of the vector

    v1.swap(v2);    //the vectors v1 and v2 are swapped

    v1.clear();     //deletes all elements of a vector

    cout << v1.empty();     //returns true if there is no element in the vector and returns false otherwise

    return 0;
}