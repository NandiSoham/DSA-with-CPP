#include <iostream>
using namespace std;

int main(){
    //declaring 2D Array
    int arr[2][3] = {{1,2,3}, {5,6,7}};

//------------------------------------------------------------------------------------------------

    //initialisation,
    int brr[3][3] = {{1,2,3}, {5,6,7}, {8,9,10}};
    cout << brr[2][2] << endl;

//------------------------------------------------------------------------------------------------

    //row wise printing
        //outer loop
    cout << "Row wise printing: " << endl;
    for(int i=0 ;i<3; ++i){
        //for every row, we need to print all values in each column. traversing inner loop for every element of outer loop
        for( int j=0; j<3; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

//--------------------------------------------------------------------------------------------------

    //column wise printing
        //outer loop
    cout << "Column wise printing: " << endl;
    for(int i=0 ;i<3; ++i){
        //for every column, we need to print all values in each row . traversing inner loop for every element of outer loop
        for( int j=0; j<3; j++){
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

//----------------------------------------------------------------------------------------------
    //creating by taking input
    int crr [3][3];
    int rows = 3;
    int cols = 3;

    //row wise input
    cout << "enter the elements: " << endl;
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>> crr[i][j];
        }
    }

    //printing
    cout<< "after taking row wise input the 2D array is:"<<endl;
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< crr[i][j] <<" ";
        }
        cout << endl;
    }

//-------------------------------------------------------------------------------

    //creating by taking input
    int drr [3][3];
    int d_rows = 3;
    int d_cols = 3;

    //column wise input
    cout << "enter the elements: " << endl;
    for(int i =0; i<d_rows; i++){
        for(int j=0; j<d_cols; j++){
            cin>> crr[j][i];
        }
    }

    //printing
    cout<< "after taking column wise input the 2D array is:"<<endl;
    for(int i =0; i<d_rows; i++){
        for(int j=0; j<d_cols; j++){
            //as we're taking the input column wise which is crr[j][i], so we will print in normal way which is crr[i][j], won't print crr[i][j] other wise it'll get reversed 
            cout<< crr[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}