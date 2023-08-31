#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

// Function to group anagrams from a list of strings
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Map to store groups of anagrams. The key is the sorted version of the word, and the value is the list of anagrams.
    map<string, vector<string>> mp;

    // Go through each word in the list
    for(auto str : strs){
        // Create a sorted version of the word
        string s = str;
        sort(s.begin(), s.end());
        
        // Add the original word to its corresponding group based on the sorted version
        mp[s].push_back(str);
    }

    // Store the grouped anagrams in a 2D vector
    vector<vector<string>> ans;
    // Go through each group in the map
    for(auto it = mp.begin(); it != mp.end(); it++){
        // Add the list of anagrams (group) to the answer
        ans.push_back(it->second);
    }

    // Return the final grouped anagrams
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    // Store the input strings in a vector
    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    // Get the grouped anagrams using the function
    vector<vector<string>> groupedAnagrams = groupAnagrams(strs);

    // Print the grouped anagrams
    cout << "Grouped Anagrams:" << endl;
    // Go through each group and each word in each group
    for(const vector<string>& group : groupedAnagrams) {
        // Print each word in the current group
        for(const string& str : group) {
            cout << str << " ";
        }
        // Move to a new line after printing all words in the current group
        cout << endl;
    }

    // Indicate successful program execution
    return 0;
}
