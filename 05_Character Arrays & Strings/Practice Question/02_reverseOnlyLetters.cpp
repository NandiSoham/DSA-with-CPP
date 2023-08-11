#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

string reverseOnlyLetters(string s)
{
    int l = 0;
    int h = s.size() - 1;

    while (l < h)
    {
        if (isalpha(s[l]) && isalpha(s[h]))
        {
            swap(s[l], s[h]);
            l++;
            h--;
        }
        else if (!isalpha(s[l]))
        {
            l++;
        }
        else
        {
            //! isalpha(s[h])
            h--;
        }
    }
    return s;
}

int main(){
    string s; 
    cout << "Enter string: ";
    cin >> s;

    string reversedString = reverseOnlyLetters(s);

    cout << "after reversing only letters the string is: " << reversedString << endl;

    return 0;
}