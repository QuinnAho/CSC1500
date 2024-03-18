#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to compute the intersection of two sets
vector<int> intersection(const vector<int>& set1, const vector<int>& set2) {
    vector<int> result;
    for (const auto& element : set1) {
        if (find(set2.begin(), set2.end(), element) != set2.end()) {
            result.push_back(element);
        }
    }
    return result;
}

// Function to compute the union of two sets
vector<int> setUnion(const vector<int>& set1, const vector<int>& set2) {
    vector<int> result = set1;
    for (const auto& element : set2) {
        if (find(result.begin(), result.end(), element) == result.end()) {
            result.push_back(element);
        }
    }
    return result;
}

// Function to compute the difference of two sets
vector<int> setDifference(const vector<int>& set1, const vector<int>& set2) {
    vector<int> result;
    for (const auto& element : set1) {
        if (find(set2.begin(), set2.end(), element) == set2.end()) {
            result.push_back(element);
        }
    }
    return result;
}

// Function to compute the inverse of a set
vector<int> setInverse(const vector<int>& set) {
    vector<int> result;
    for (int i = 1; i <= 10; i++) {
        if (find(set.begin(), set.end(), i) == set.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B = {2, 4, 6, 8, 10};
    vector<int> C = {1, 3, 5, 7, 9};
    vector<int> D = {1, 2, 3, 5, 7};

    // Problem 1: A ∩ D
    vector<int> problem1 = intersection(A, D);
    cout << "Problem 1: ";
    if (problem1.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem1) {
            cout << element << " ";
        }
    }
    cout << endl;

    // Problem 2: (B ∪ C) ∩ A
    vector<int> problem2 = intersection(setUnion(B, C), A);
    cout << "Problem 2: ";
    if (problem2.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem2) {
            cout << element << " ";
        }
    }
    cout << endl;

    // Problem 3: (!C ∪ C) ∩ A
    vector<int> problem3 = intersection(setUnion(setInverse(C), C), A);
    cout << "Problem 3: ";
    if (problem3.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem3) {
            cout << element << " ";
        }
    }
    cout << endl;

    // Problem 4: A - D
    vector<int> problem4 = setDifference(A, D);
    cout << "Problem 4: ";
    if (problem4.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem4) {
            cout << element << " ";
        }
    }
    cout << endl;

    // Problem 5: N(!A ∪ (C ∪ D))
    vector<int> problem5 = setUnion(setInverse(A), setUnion(C, D));
    cout << "Problem 5: " << problem5.size() << endl;

    // Problem 6: D ∩ C
    vector<int> problem6 = intersection(D, C);
    cout << "Problem 6: ";
    if (problem6.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem6) {
            cout << element << " ";
        }
    }
    cout << endl;

    // Problem 7: N(B ∩ C)
    vector<int> problem7 = intersection(B, C);
    cout << "Problem 7: " << problem7.size() << endl;

    // Problem 8: A ∪ B ∪ C ∪ D
    vector<int> problem8 = setUnion(setUnion(setUnion(A, B), C), D);
    cout << "Problem 8: ";
    if (problem8.empty()) {
        cout << "Empty Set";
    } else {
        for (const auto& element : problem8) {
            cout << element << " ";
        }
    }
    cout << endl;

    return 0;
}
