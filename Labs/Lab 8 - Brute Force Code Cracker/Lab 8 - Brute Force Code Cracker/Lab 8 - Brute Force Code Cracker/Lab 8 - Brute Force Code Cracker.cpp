#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to decrypt a single cipher text with a given key
string decryptCipher(const string& cipher, int key) {
    string decryptedText = "";
    for (char ch : cipher) {
        if (ch >= 'a' && ch <= 'z') { // Lowercase letters
            decryptedText += char(int('a') + (ch - 'a' - key + 26) % 26);
        }
        else if (ch >= 'A' && ch <= 'Z') { // Uppercase letters
            decryptedText += char(int('A') + (ch - 'A' - key + 26) % 26);
        }
        else {
            decryptedText += ch;
        }
    }
    return decryptedText;
}

// Decrypt a cipher text with all possible keys and print if it looks like English
void decryptAndPrintEnglish(const string& cipher) {
    for (int key = 0; key < 26; ++key) {
        string decryptedText = decryptCipher(cipher, key);
        // Assuming English sentences have spaces and vowels
        if (decryptedText.find(' ') != string::npos && (decryptedText.find('a') != string::npos || decryptedText.find('e') != string::npos)) {
            cout << "Decrypted with key " << key << ": " << decryptedText << endl;
            break; // Assuming only one meaningful English sentence per cipher
        }
    }
}

int main() {
    vector<string> ciphers = {
        "Wkh qljkw lv orqj dqg zh doo suhwhqg wr vohhs",
        "F xrfqq hnyd mfx gjjs inxhtajwji zsijw ymj gtbqnsl fqqjd",
        "Yx Drebcnki dro vslbkbi gsvv lo exuxygklvo",
        "Epht bsf opu bmmpxfe jo uif eph qbsl",
        "Jrypbzr gb Avtug Inyr"
    };

    for (int i = 0; i < ciphers.size(); ++i) {
        cout << "Cipher " << i + 1 << ": " << ciphers[i] << endl;
        decryptAndPrintEnglish(ciphers[i]);
        cout << endl; // Add a newline for readability between ciphers
    }

    return 0;
}
