#include <iostream>
#include <string>

using namespace std;

// Function to check if there's an incorrect bit and return its position
int checkError(const string& input) {
    int errorPosition = 0;
    int parityBit1 = input[2] ^ input[4] ^ input[6];
    int parityBit2 = input[2] ^ input[5] ^ input[6];
    int parityBit4 = input[4] ^ input[5] ^ input[6];

    if (input[0] != parityBit1) {
        errorPosition += 1;
    }
    if (input[1] != parityBit2) {
        errorPosition += 2;
    }
    if (input[3] != parityBit4) {
        errorPosition += 4;
    }

    return errorPosition;
}

// Function to correct the input if there's an error
string correctCode(const string& input) {
    string corrected = input;
    int errorPosition = checkError(input);

    if (errorPosition != 0) {
        corrected[errorPosition - 1] = (corrected[errorPosition - 1] == '0') ? '1' : '0';
    }

    return corrected;
}

// Function to convert the corrected code to decimal form
int convertToDecimal(const string& correctedCode) {
    string message = correctedCode.substr(2, 4);
    int decimalForm = stoi(message, nullptr, 2);
    return decimalForm;
}

int main() {

    string inputs[] = {
        "1101010",
        "0010111",
        "1010101",
        "1001001",
        "0110011"
    };

    for (const string& input : inputs) {
        int errorPosition = checkError(input);
        string corrected = correctCode(input);
        int decimalForm = convertToDecimal(corrected);

        cout << "Input: " << input << endl;
        cout << "Error Position: " << errorPosition << endl;
        cout << "Corrected Code: " << corrected << endl;
        cout << "Decimal Form: " << decimalForm << endl;
        cout << endl;
    }

    return 0;
}