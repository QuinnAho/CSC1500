#include <iostream>

using namespace std;

bool implies(bool A, bool B) {
    return !A || B;
}

bool nor(bool A, bool B) {
    return !A && !B;
}

bool xor_op(bool A, bool B) {
    return A != B;
}

bool nand(bool A, bool B) {
    return !(A && B);
}

bool xnor(bool A, bool B) {
    return !(A != B);
}

int main() {
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            for (int C = 0; C <= 1; C++) {
                cout << "A: " << A << " B: " << B << " C: " << C << " => ";
                cout << "(1): " << xor_op(nor(A, C), B) << " ";
                cout << "(2): " << nand(implies(B, C), nor(A, B)) << " ";
                cout << "(3): " << implies(xor_op(A, B), xnor(B, C)) << " ";
                cout << "(4): " << implies(implies(A, B), !C);
                cout << endl;
            }
        }
    }
    return 0;
}
