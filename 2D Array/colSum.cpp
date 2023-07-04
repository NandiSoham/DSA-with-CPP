#include <iostream>
using namespace std;

void printColSum(int arr[][3], int rows, int cols){  // here we can't keep the [] empty it'll throw error. while creting 2D, 3D, 4D arrays except first [], all [] needs to be filled with values
    //col sum -> col wise traversal
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum +arr[i][j];
        }
        cout << "Sums of col " << i <<" :" <<endl;
        cout<<sum<<endl;
    }
}   

int main(){
    //creating by taking input
    int arr [3][3];
    int rows = 3;
    int cols = 3;

    //col wise input
    cout << "enter the elements: " << endl;
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>> arr[j][i];
        }
    }
    printColSum(arr, rows, cols);
}