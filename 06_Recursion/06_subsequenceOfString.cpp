#include <iostream>
#include<vector>
using namespace std;

void printSubsequence(string str, string outputString, int i, vector<string>& ansVector){
    //base case
    if(i >= str.length()){
        // cout << outputString << endl; // to print the subsequences

        ansVector.push_back(outputString); // to store the subsequences in a vector
        return;
    }

    // we have 2 case -> i) include ii) exclude

    //include
    outputString.push_back(str[i]);
    printSubsequence(str, outputString, i+1, ansVector);
    outputString.pop_back();    // undo the inclusion (backtrack). pop_back to remove it before moving to the "exclude" case. This ensures that the "outputString" remains unchanged after each recursive call

    //exclude
    printSubsequence(str, outputString, i+1, ansVector);

}

int main(){
    string str = "abc";
    string outputString = "";

    // ------optional part just to show how can we store the ans in a vector-------
    vector<string> ansVector;
    //---------------------------------------//
    
    int i = 0;
    printSubsequence(str, outputString, i, ansVector);

    //-----------printing part of the optional step-----------
    cout << "Printing all the subsequences: ";
    for(auto val: ansVector){
        cout << "{" << val << "}" << ", ";
    }

    //--------------------------------------------------------------

    return 0;
}