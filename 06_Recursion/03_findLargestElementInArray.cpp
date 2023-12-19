#include <iostream>
#include <limits.h>
using namespace std;

void findLargest(int arr[], int n, int i, int& maxNum){
    //base case
    if(i >= n){
        return;
    }

    //1 case solve kar diya (check current element if that is the largest)
    if(arr[i] > maxNum){
        maxNum = arr[i];
    }

    //baaki recursion sambhal lega
    findLargest(arr, n, i+1, maxNum);
}

int main(){
    int arr[] = {10, 30, 15, 21, 44, 26};
    int n = 6;
    int i = 0;
    int maxNum = INT_MIN;

    findLargest(arr, n, i, maxNum);

    cout << "Largest element is the array is: " << maxNum << endl;

    return 0;
}