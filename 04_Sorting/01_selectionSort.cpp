#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();

    // selection sort algorithm implementation
    //outer loop -> for (n-1) rounds
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        //inner loop -> finds index of min element in range of i to n.
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // got new minimumvalue, store it
                minIndex = j;
            }
        }
        // swap
        swap(arr[i], arr[minIndex]);
    }

    //print
    cout << "after sorting the array is: ";
    for(int i=0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}