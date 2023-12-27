// Left to Right iteration method

#include <iostream>
using namespace std;

void lastOccurance(string& str, char key, int i, int& ans){
    // base case
    if (i >= str.size()) {
        return;
    }

    //1 case solve kar do
    if(str[i] == key){
        ans = i;
    }

    //baaki recursion sambhal lega
    lastOccurance(str,key,i+1,ans);
}

int main(){
    cout << "enter your string: ";
    string str;
    cin >> str;

    cout << "Enter your key character: ";
    char key;
    cin >> key;

    int ans = -1; // variable to store the index of last occurance, initialized with -1.
    int i = 0; // for iteration
    lastOccurance(str, key, i, ans);

    cout << "The last occurance of " << key << " is in " << ans << "th index";

    return 0;
}