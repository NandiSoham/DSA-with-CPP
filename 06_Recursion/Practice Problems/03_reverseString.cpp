#include <iostream>
#include <string>
using namespace std;

void reverseString(string&str, int start, int end){
    //base case
    if (start >= end)  return ;

    //1 case solve kar do
    swap(str[start], str[end]);

    //baaki recursion sambhal lega
    reverseString(str, start + 1, end - 1);

}

int main(){
    cout << "Enter your string: ";
    string str;
    cin >> str;

    int start = 0;
    int end = str.size() - 1;

    reverseString(str, start, end);

    cout << "Reversed string is " << str << endl;

    return 0;
}