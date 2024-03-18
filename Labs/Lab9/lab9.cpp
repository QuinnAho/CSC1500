/*

Quinn Aho
CSC 1500
Lab 9
lab9.cpp

*/


#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

void displaySet(const set<int>& s) {
    if (s.empty()) {
        cout << "Empty Thread" << endl;
    } else {
        for (const int& element : s) {
            cout << element << " ";
        }
        cout << endl;
    }
}

set<int> setUnion(const set<int>& s1, const set<int>& s2) {
    set<int> result;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
    return result;
}

set<int> setIntersection(const set<int>& s1, const set<int>& s2) {
    set<int> result;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
    return result;
}

set<int> setDifference(const set<int>& s1, const set<int>& s2) {
    set<int> result;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
    return result;
}

int main() {
    set<int> A = {1,2,3,4,5,6,7,8,9,10};
    set<int> B = {2,4,6,8,10};
    set<int> C = {1,3,5,7,9};
    set<int> D = {1,2,3,5,7};

    // Solve the given problems
    cout << "Problem 1 (A ∩ D): ";
    displaySet(setIntersection(A, D));

    cout << "Problem 2 ((B ∪ C) ∩ A): ";
    displaySet(setIntersection(setUnion(B, C), A));

    cout << "Problem 3 ((!C ∪ C) ∩ A): ";
    displaySet(setIntersection(setUnion(setDifference(A, C), C), A));

    cout << "Problem 4 (A - D): ";
    displaySet(setDifference(A, D));

    cout << "Problem 5 (N(!A ∪ (C ∪ D))): ";
    cout << setUnion(setDifference(A, A), setUnion(C, D)).size() << endl;

    cout << "Problem 6 (D ∩ C): ";
    displaySet(setIntersection(D, C));

    cout << "Problem 7 (N(B ∩ C)): ";
    cout << setIntersection(B, C).size() << endl;

    cout << "Problem 8 (A ∪ B ∪ C ∪ D): ";
    displaySet(setUnion(setUnion(A, B), setUnion(C, D)));

    return 0;
}
