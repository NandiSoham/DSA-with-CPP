#include <iostream>
using namespace std;

void printArr(int arr[], int n, int i){
    // base case
    if (i >= n){
        return;
    }

    //1 case solve kar diya
    cout << arr[i] << ", ";
    //baaki recursion sambhal lega
    printArr(arr, n, i+1);
}

int main(){
    int arr[] = {20,45,67,87,90};
    int n = 5;
    int i = 0;
    printArr(arr, n, i);

    return 0;
}