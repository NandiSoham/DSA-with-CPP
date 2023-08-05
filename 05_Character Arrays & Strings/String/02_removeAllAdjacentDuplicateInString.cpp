#include <iostream>
#include <string.h>
using namespace std;

string removeAdjacentDuplicate(string s)
{
    string ans = "";
    int i = 0;

    while (i < s.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << "before remobing adjacent duplicates, the string is : " << s << endl;
    string newString = removeAdjacentDuplicate(s);
    cout << "after remobing adjacent duplicates, the string is : " << newString << endl;
}