/*

Quinn Aho
Lab 6
CSC1500
2/9/24

*/

#include <iostream>

int sumUsingLoop(int number, int& operation) {
    int sum = 0;
    operation = 0;

    for (int i = 1; i <= number; i++) {
        sum += i;
        operation++;
    }

    return sum;
}

int sumUsingFormula(int number, int& operation) {
    int sum = (number * (number + 1)) / 2;

    operation = 2;
    return sum;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int operations;
    int sum = sumUsingLoop(number, operations);
    std::cout << "Sum using loop: " << sum << ", operations: " << operations << std::endl;

    sum = sumUsingFormula(number, operations);
    std::cout << "Sum using formula: " << sum << ", operations: " << operations << std::endl;

    return 0;
}

/*
Notes:

When a varible is passed by a value (without the &), the function creates a copy of the variable and any changes made to it inside
the function will not affect the original variable.

when a variable is passed by reference (with the &), the function works directly with the original variable, so any changes made 
to it inside the function will be reflected in the original variable outside the function.

*/