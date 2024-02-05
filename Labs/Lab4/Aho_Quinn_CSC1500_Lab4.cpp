#include <iostream>
using namespace std;

bool implies(bool A, bool B) {
    return !A || B;
}

bool is_valid_prp_logic(bool R, bool A, bool T, bool E) {
    bool prop1 = implies(R, A);
    bool prop2 = implies(A, T);
    bool prop3 = implies(T, E);
    bool conclusion = implies(E, R);
    return !(prop1 && prop2 && prop3 && !conclusion);
}

int main() {
    bool valid = true;

    for (int R = 0; R <= 1; R++) {
        for (int A = 0; A <= 1; A++) {
            for (int T = 0; T <= 1; T++) {
                for (int E = 0; E <= 1; E++) {
                    if (!is_valid_prp_logic(R, A, T, E)) {
                        valid = false;
                        cout << "Invalid when: R = " << R << ", A = " << A << ", T = " << T << ", E = " << E << endl;
                    }
                }
            }
        }
    }

    if (valid) {
        cout << "The statement is valid." << endl;
    } else {
        cout << "The statement is invalid." << endl;
    }

    return 0;
}
