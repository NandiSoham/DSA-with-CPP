#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    //storing elements in the temporary array in a sorted manner//
    while((left <= mid) && (right <= high)){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right ++;
        }
    }

    // if elements on the left half are still left but right half is finished
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // if elements on the right half are still left but left half is finished
    while(right <= high){
        temp.push_back(arr[right]);
        right ++;
    }

    // transfering all elements from temporary to original array
    for(int i = low; i <= high; i++){
        arr[i] = temp [i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    //base case
    if(low >= high) return;
    int mid = (low + high)/2;
    //recursively calling for the left and right half of the array
    mergeSort(arr, low, mid); //for left half
    mergeSort(arr, mid+1, high); //for right half
    merge(arr, low, mid, high); //merging the two sorted halves
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Array before sorting: " << endl;
    for(int i = 0; i < n ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n-1);
    cout << "Array after sorting: " << endl;
    for (int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    return 0;
}