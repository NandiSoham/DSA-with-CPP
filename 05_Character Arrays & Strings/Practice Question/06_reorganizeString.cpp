#include <iostream>
#include <string>

using namespace std;

// Function to reorganize the string
string reorganizeString(string s) {
    int hash[26] = {0};  // Initialize an array to store character frequencies, 'a' to 'z'

    // Count the frequency of each character in the string
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;  // Increment the frequency count for the character at index (s[i] - 'a')
    }

    // Find the character with the highest frequency
    char mostOccurChar;
    int maxFreq = INT_MIN;

    // Iterate through each character's frequency to find the most frequent character
    for(int i = 0; i < 26; i++) {
        if(hash[i] > maxFreq) {
            maxFreq = hash[i];  // Update the maximum frequency
            mostOccurChar = i + 'a';  // Store the character corresponding to the index
        }
    }

    int index = 0;

    // Place the most frequent character at even indices
    while(maxFreq > 0 && index < s.size()) {
        s[index] = mostOccurChar;  // Replace the character at the current index with the most frequent character
        maxFreq--;  // Decrease the frequency count of the most frequent character
        index += 2;  // Move to the next even index
    }

    if(maxFreq != 0) {
        return ""; // If there are still remaining characters with positive frequency, reorganization is not possible
    } else {
        hash[mostOccurChar - 'a'] = 0; // Set the frequency of the used character to 0
    }

    // Place the remaining characters at odd indices
    for(int i = 0; i < 26; i++) {
        while(hash[i] > 0) {
            index = index >= s.size() ? 1 : index; // Wrap around if the index exceeds the string length
            s[index] = i + 'a';  // Place the character corresponding to the current index
            hash[i]--;  // Decrease the frequency count of the placed character
            index += 2;  // Move to the next odd index
        }
    }
    return s; // Return the reorganized string
}

// Main function
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Call the reorganizeString function
    string result = reorganizeString(input);

    if(result.empty()) {
        cout << "It's not possible to reorganize the string." << endl;
    } else {
        cout << "Reorganized string: " << result << endl;
    }

    return 0;
}
