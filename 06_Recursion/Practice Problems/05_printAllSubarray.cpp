#include <iostream>
#include <vector>
using namespace std;

void printSubarray(vector<int> &arr, int start, int end){
    //base case
    if (end == arr.size()){
        return;
    } 

    // 1 case solve kar do
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //baaki recursion sambhal lega
    printSubarray(arr, start, end+1);
}

//til here using the printSubarrayUtil() function we've print all the subarrays started from 0th index
// now we need to print other subarrays also which means subarrays which will start from 1st index, 2nd index and so on

void printAllSubarray(vector<int>&arr){
    for(int start = 0; start < arr.size(); start ++){
        int end = start;
        printSubarray(arr, start, end);
    }
}

int main(){
    vector<int> arr {1, 2, 3, 4, 5};

    printAllSubarray(arr);

    return 0;
}