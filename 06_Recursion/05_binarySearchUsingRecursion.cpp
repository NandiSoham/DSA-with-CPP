#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vtr, int start, int end, int key){
    // base case
    //case 1 -> invalid array, key not found
    if(start > end){
        return -1;
    }

    int mid = (start + end)/2;

    //case 2-> Key found
    if(vtr[mid] == key){
        return mid;
    }

    // vtr[mid] < key -> search in right part
    else if(vtr[mid] < key) {
        return binarySearch(vtr, mid+1, end, key);
    }

    //vtr[mid] > key -> search in the left part
    else{
        return binarySearch(vtr, start, mid-1, key);
    }
}

int main(){
    vector<int> vtr{10, 20, 40, 60, 70, 90, 99};
    int key = 99;

    int n = vtr.size();
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;

    int ans = binarySearch(vtr, start, end, key);

    cout << "Our target element " << key << " is present in " << ans << "th index";

    return 0;
}