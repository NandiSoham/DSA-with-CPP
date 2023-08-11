#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    string ans;
    int i = 0;

    while (true) {
        char currChar = 0;

        for (auto str : strs) {
            if (i >= str.size()) {
                // Out of bound: we've reached the end of at least one string
                currChar = 0;
                break;
            }
            if (currChar == 0) {
                currChar = str[i]; // Initialize currChar with the character from the first string
            } else if (str[i] != currChar) {
                // Current character doesn't match in all strings
                currChar = 0;
                break;
            }
        }

        if (currChar == 0) {
            break; // Exit the loop if currChar is 0 (no common character found)
        }
        ans.push_back(currChar); // Add the common character to the answer
        i++; // Move to the next character position
    }
    return ans; // Return the longest common prefix found
}

int main() {
    vector<string> customStrings;
    int numStrings;

    cout << "Enter the number of strings: ";
    cin >> numStrings;

    cout << "Enter " << numStrings << " strings:" << endl;
    for (int i = 0; i < numStrings; i++) {
        string input;
        cin >> input;
        customStrings.push_back(input);
    }

    string commonPrefix = longestCommonPrefix(customStrings);

    cout << "Longest Common Prefix: " << commonPrefix << endl;

    return 0;
}