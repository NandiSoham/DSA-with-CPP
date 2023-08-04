#include <iostream>
#include<vector>
using namespace std;

int findOddOccurance(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
        //single element array
        if(s == e){
            return s;
        }

//-----------2 cases: mid -> even or mid -> odd----------
        
        //1st case: mid -> even
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid + 2;
            } else{ // arr[mid] != arr[mid+1]
                e = mid;
            }
        }
        else{   //mid -> odd (mid%2 != 0)
            if(arr[mid] == arr[mid - 1]){
                s= mid + 1;
            }
            else{   //arr[mid] != arr[mid-1]
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = findOddOccurance(arr);

    cout<< "the odd times occuring element is : " << arr[ans] << " and it occured at index : " << ans << endl;
    return 0;
}