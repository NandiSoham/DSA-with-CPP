#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &vtr, int& n, int i){
    //base condition
    if(i == n-1){
        return true;
    }

    //1 case solve karna hai
    if(vtr[i+1] < vtr[i]){
        return false;
    }

    //baki recursion sambhal lega
    bool ans = checkSorted(vtr, n, i+1);
    return ans;
}

int main(){
    vector<int> vtr{10, 20, 30, 40, 70, 60};
    int n = vtr.size();
    int i = 0;

    bool isSorted = checkSorted(vtr, n, i);
    if (isSorted) {
        cout << "The array is sorted." << endl;
    } else{
        cout << "The array is not sorted." << endl;
    }

    return 0;
}