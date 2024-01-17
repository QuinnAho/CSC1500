#include <iostream>
using namespace std;

bool implies(bool A, bool B) {
    return !A || B; 
}

bool nor(bool A, bool B) {
    return !A && !B; 
}

bool xor(bool A, bool B) {
    return A != B; 
}

bool nand(bool A, bool B) {
    return !(A && B); 
}

/*int lab_3_main(){
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            for (int C = 0; C <= 1; C++) {
           
            }
        }
    }
}
*/


bool implies(bool A, bool B) {
    return; // 
}

is_valid_prp_logic(bool A, bool B, bool C, bool D) {
    if(...) return true;
    else return false; // 
}

/*
Someone has a rocket: R;
astrounaut: A
trained: T
educated: E
*/
int lab_4_main(){
for (int A = 0; A <= 1; R++) {
        for (int B = 0; B <= 1; A++) {
            for (int C = 0; C <= 1; T++) {
                for (int D = 0; D <= 1; E++){
                    if (is_valid_prp_logic(R, A, T, E)) { R = 0 A = 1
                        cout << " " << "someone does not have a rocket" << " ast" .....
                    }
                    else{
                        cout <<  " "... "invalid"<<endl;

                    }
                }
           
            }
        }
    }
}