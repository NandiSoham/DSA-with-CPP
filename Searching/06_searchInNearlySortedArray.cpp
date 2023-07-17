#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = (int)arr.size() - 1 ;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        } else if(mid-1 >= 0 && arr[mid -1] == target){
            return mid -1;
        } else if(mid + 1 < arr.size() && arr[mid + 1] == target){
            return mid + 1;
        } else if(arr[mid] < target){
            //search in right half
            s=mid+2;
        }else if(arr[mid] > target){
            // search in left half
            e=mid-2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 40;

    int ans = binarySearch(arr, target);
    cout<< "index of "<< target << " is " << ans <<endl;
}