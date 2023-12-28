#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string&str, int start, int end){
    // base case
    if(start >= end){
        return true;
    }

    // 1 case solve kar do
    if (str[start] != str[end]){
        return false;
    }

    // baaki recursion sambhal lega
    return isPalindrom(str, start + 1, end -1) ;
}

int main(){
    cout << "Enyter your string: ";
    string str;
    cin >> str;

    int start = 0;
    int end = str.size() - 1;

    bool ans = isPalindrom(str, start, end);

    if (ans){
        cout << "The string " << "'" << str << "'" << " is a Palindrom";
    }else{
        cout << "The string " << str << " is not a Palindrom";
    }
}