#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        int element = arr[mid];
        if(element == target){
            //if element found return index
            return mid;
        } else if(target < element){
            //search on left side
            end = mid - 1;
        } else{
            //search in right side
            start = mid + 1;
        }

        //update mid
        mid = start + (end - start) / 2;
    }

    //element not found, so return -1
    return -1;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = 8;
    int target = 15;

    int indexOfTarget = binarySearch(arr, size, target);

    if(indexOfTarget == -1){
        cout << "Element not found in array" << endl;
    } else {
        cout << "Element found at index: "<< indexOfTarget <<endl;
    }

    return 0;

}