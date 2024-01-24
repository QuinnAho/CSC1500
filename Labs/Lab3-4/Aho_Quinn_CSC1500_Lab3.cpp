#include <iostream>

using namespace std;

bool implies(bool A, bool B) {
    return !A || B;
}

bool nor(bool A, bool B) {
    return !A && !B;
}

// Renamed xor to xor_op
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
                bool result1 = xor_op(nor(A, C), B);
                bool result2 = nand(implies(B, C), nor(A, B));
                bool result3 = implies(xor_op(A, B), xnor(B, C));
                bool result4 = implies(implies(A, B), !C);

                cout << "A: " << A << ", B: " << B << ", C: " << C << " => ";
                cout << result1 << ", ";
                cout << result2 << ", ";
                cout << result3 << ", ";
                cout << result4 << endl;
            }
        }
    }
    return 0;
}
