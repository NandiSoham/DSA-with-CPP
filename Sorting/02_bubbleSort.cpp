#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 6, 7, 14, 9};
    int n = arr.size();

    // Bubble Sort
    for (int round = 1; round < n; round++)
    {
        bool swapped = false;
        for (int j = 0; j <= n - round - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            // if no element was swapped in this round, no need to check further rounds
            break;
        } 
    }

    // print
    cout << "after sorting the array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}