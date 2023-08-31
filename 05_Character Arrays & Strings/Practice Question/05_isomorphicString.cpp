#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
    int hash[256] = {0};        // Initialize an array to store mappings from characters of string 's' to characters of string 't'
    bool isMapped[256] = {0};   // Initialize an array to track whether characters of string 't' are already mapped

    for(int i = 0; i < s.size(); i++) {
        // Check if character in 's' is not mapped yet and the corresponding character in 't' is also not mapped
        if (hash[s[i]] == 0 && isMapped[t[i]] == 0) {
            hash[s[i]] = t[i];         // Map character from 's' to character in 't'
            isMapped[t[i]] = true;     // Mark the character in 't' as mapped
        }
    }

    for(int i = 0; i < s.size(); i++) {
        // Check if the mapped character from 's' doesn't match the current character in 't'
        if (char(hash[s[i]]) != t[i]) {
            return false;              // If not isomorphic, return false
        }
    }

    return true;  // If all characters are properly mapped and matched, return true (strings are isomorphic)
}

int main() {
    string s = "egg";  // First input string
    string t = "add";  // Second input string

    if (isIsomorphic(s, t)) {
        cout << "Strings are isomorphic." << endl;  // Output if strings are isomorphic
    } else {
        cout << "Strings are not isomorphic." << endl;  // Output if strings are not isomorphic
    }

    return 0;  // Return 0 to indicate successful completion of the program
}
