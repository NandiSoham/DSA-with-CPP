#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s) / 2;

    while(s<=e){
        if(arr[s] == arr[e]){
            //single element array
            return s;
        }
        
        if(arr[mid] > arr[mid+1] && mid+1 <= e){
            return mid;
        }
        if(arr[mid - 1] > arr[mid] && mid-1 >= s){
            return mid-1;
        }

        if(arr[s] > arr[mid]){
            //left search
            e = mid-1;
        }
        else{   
            //right search
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

    int main()
{
    vector<int> arr{9, 10, 2, 4, 6, 8};
    int ans = findPivot(arr);

    if (ans == -1)
    {
        cout << "Something is wrong" << endl;
    }
    else
    {
        cout << "value of pivot element is " << arr[ans] << " and it is in " << ans << " index" << endl;
    }
    return 0;
}