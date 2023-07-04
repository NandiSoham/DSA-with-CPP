#include <iostream>
#include <limits.h>
using namespace std;

void transpose(int arr[][3], int rows, int cols, int trnasposeArr[][3])
{ // here we can't keep the [] empty it'll throw error. while creting 2D, 3D, 4D arrays except first [], all [] needs to be filled with values
    int maxNum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            trnasposeArr[j][i] = arr[i][j];
        }
    }
}

void printMatrix(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // creating by taking input
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int transposeArr[3][3];

    // row wise input
    cout << "enter the elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing given matrix: "<< endl;
    printMatrix(arr, rows, cols);
    cout << "Transposing the Matrix... " << endl;
    transpose(arr, rows, cols, transposeArr);
    cout << "After transposing the Matrix: " << endl;
    printMatrix(transposeArr, rows, cols);

    return 0;
}