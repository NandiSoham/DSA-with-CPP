#include <iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr){
    for(auto value: arr){
        cout << value <<" ";
    }
    cout<<endl; 
}

int main(){
    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while(i <= end ){ 
        cout << "for i =" << i << " start=" << start << " end=" << end << endl;
        if (arr[i] == 0){
            //swap from left
            cout << "found 0" << endl;
            cout << "before swap: ";
            printArray(arr);
            swap(arr[start], arr[i]);
            cout << "after swap: ";
            printArray(arr);
            i++;
            start++;

            cout << "now i =" << i << " start =" << start << " end=" << end << endl;
        }
        if(arr[i] == 1){
            cout << "found 1" << endl;
            cout << "before swap: ";
            printArray(arr);
            //swap from right
            swap(arr[end], arr[i]);
            cout << "after swap: ";
            printArray(arr);
            end--;
            cout << "now i =" << i << " start =" << start << " end=" << end << endl;
        }
    }
    return 0;
    
}