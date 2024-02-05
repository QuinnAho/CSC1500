#include <iostream>
#include <vector>

std::vector<unsigned> base_converter(int decimal, int base) {
    std::vector<unsigned> res;
    while (decimal > 0) {
        res.push_back(decimal % base);
        decimal /= base;
    }
    return res;
}

void print_base_conversion(int decimal, int base) {
    std::vector<unsigned> result = base_converter(decimal, base);
    std::cout << decimal << " in base " << base << ": ";
    for (int i = result.size() - 1; i >= 0; i--) {
        std::cout << result[i];
    }
    std::cout << std::endl;
}

int main() {
    // Combination A: 15, base 2
    print_base_conversion(15, 2);

    // Combination B: 38, base 16
    print_base_conversion(38, 16);

    // Combination C: 54, base 6
    print_base_conversion(54, 6);

    // Combination D: 19, base 8
    print_base_conversion(19, 8);

    // Combination E: 27, base 3
    print_base_conversion(27, 3);

    return 0;
}
