#include <iostream>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part) {
        int position = s.find(part);
        while(position != string::npos){
            s.erase(position, part.length());
            position = s.find(part);
        }
        return s;
    }

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << "before erasing, the string is : " << s << endl;
    string newString = removeOccurrences(s, part);
    cout << "before erasing, the string is : " << newString << endl;
}