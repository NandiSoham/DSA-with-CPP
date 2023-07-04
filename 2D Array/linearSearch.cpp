#include <iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key)
{ // here we can't keep the [] empty it'll throw error. while creting 2D, 3D, 4D arrays except first [], all [] needs to be filled with values

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j == key])
            
                return true;
            
        }
    }
    return false;
}

int main()
{
    // creating by taking input
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // row wise input
    cout << "enter the elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key = 2;
    if (findKey(arr, 3, 3, key))
    {
        cout << "Key element found in array" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
}