#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> v, int target){
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(v[mid] == target){
            //store the ans
            ans = mid;

            //search on left -> for that we need to move the end to (mid -1)
            e = mid -1;
        } else if(target > v[mid]){
            s=mid+1;   // search right half of array
        }
        else if(target < v[mid]){
            e=mid-1;    // search left half of array
        }

        //update mid
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> v{1,3,4,4,4,4,4,6,7,9};
    int target = 4;

    int indexOfFirstOccurance = firstOccurance(v, target);

    if(indexOfFirstOccurance == -1){
        cout<<"element not found"<<endl;
    }else{
        cout << "the target element occurend 1st time in " << indexOfFirstOccurance << " index" << endl;
    }
}