#include <iostream>
using namespace std;

void moveNegToLeft(int*arr, int sizeArr){
    //dutch national flag algorithm

    int l = 0;
    int h = sizeArr -1;
    while(l<h){
        if (arr[l] < 0){
            l++;
        } else if(arr[h] > 0){
            h--;
        } else{
            swap(arr[l], arr[h]);
        }
    }
}

int main(){
    int arr [] = {1,2,-3,4,-5,-6};
    int sizeArr = sizeof(arr)/sizeof(int);

    moveNegToLeft(arr, sizeArr);
    
    //printing the output
    for(int i=0; i<sizeArr ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}