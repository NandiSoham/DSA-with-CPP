#include <iostream>
using namespace std;

void printSubsequence(string str, string outputString, int i){
    //base case
    if(i >= str.length()){
        cout << outputString << endl;
        return;
    }

    // we have 2 case -> i) include ii) exclude

    //include
    outputString.push_back(str[i]);
    printSubsequence(str, outputString, i+1);

    //exclude
    printSubsequence(str, outputString, i+1);

}

int main(){
    string str = "abc";
    string outputString = "";

    int i = 0;
    printSubsequence(str, outputString, i);

    return 0;
}