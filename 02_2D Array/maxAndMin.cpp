#include <iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int cols){  // here we can't keep the [] empty it'll throw error. while creting 2D, 3D, 4D arrays except first [], all [] needs to be filled with values
    int maxNum = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxNum){
                maxNum = arr[i][j];
            }
        }
    }
    return maxNum;
}   

int getMin(int arr[][3], int rows, int cols){  // here we can't keep the [] empty it'll throw error. while creting 2D, 3D, 4D arrays except first [], all [] needs to be filled with values
    int minNum = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < minNum){
                minNum = arr[i][j];
            }
        }
    }
    return minNum;
}

int main(){
    //creating by taking input
    int arr [3][3];
    int rows = 3;
    int cols = 3;

    //row wise input
    cout << "enter the elements: " << endl;
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>> arr[i][j];
        }
    }
    
    cout<< "max number in the array is: " << getMax(arr, rows, cols) << endl;
    cout<< "min number in the array is: " << getMin(arr, rows, cols) << endl;

    return 0;
}