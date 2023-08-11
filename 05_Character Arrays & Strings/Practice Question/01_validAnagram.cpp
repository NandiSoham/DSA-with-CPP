#include <iostream>
#include <string.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int frequencyTable[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        frequencyTable[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        frequencyTable[t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (frequencyTable[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, t; // Declare separate variables for input strings
    cout << "Enter first string: ";
    cin >> s; 

    cout << "Enter second string: ";
    cin >> t;

    bool result = isAnagram(s, t);

    if (!result)
    {
        cout << "Not an Anagram";
    }
    else
    {
        cout << "Is an Anagram"; // Corrected the output message to "Is an Anagram"
    }
    return 0;
}