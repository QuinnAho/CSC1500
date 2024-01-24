/*
Quinn Aho
CSC 1500
Lab 2
*/

#include <iostream>

using namespace std;

bool statement1(bool A, bool B, bool C);
bool statement2(bool A, bool B, bool C);
bool statement3(bool A, bool B, bool C);
bool statement4(bool A, bool B, bool C);
bool statement5(bool A, bool B, bool C);

int main() {
    for (int A = 0; A <= 1; ++A) {
        for (int B = 0; B <= 1; ++B) {
            for (int C = 0; C <= 1; ++C) {
                cout << "Combination A=" << A << ", B=" << B << ", C=" << C << ":\n";
                cout << "Statement 1 is " << (statement1(A, B, C) ? "true" : "false") << "\n";
                cout << "Statement 2 is " << (statement2(A, B, C) ? "true" : "false") << "\n";
                cout << "Statement 3 is " << (statement3(A, B, C) ? "true" : "false") << "\n";
                cout << "Statement 4 is " << (statement4(A, B, C) ? "true" : "false") << "\n";
                cout << "Statement 5 is " << (statement5(A, B, C) ? "true" : "false") << "\n\n";
            }
        }
    }
    return 0;
}

bool statement1(bool A, bool B, bool C) {
    return (A && B) || (A && C);
}

bool statement2(bool A, bool B, bool C) {
    return (A && C) && (B && !C);
}

bool statement3(bool A, bool B, bool C) {
    return (A || B) && !(B || C);
}

bool statement4(bool A, bool B, bool C) {
    return (A || (B && C)) && (!A && !B);
}

bool statement5(bool A, bool B, bool C) {
    return (((B && C) || (C && A)) && ((!A && !B) && C));
}
