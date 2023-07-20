#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 6, 7, 14, 9};
    int n = arr.size();

    // insertion sort
    for (int round = 1; round < n; round++)
    {
        // step A -> Fetch
        int val = arr[round];
        int j;

        // step B -> Compare (agar ith element pe hu to (i-1) se le kar 0th index tak compare karna hoga)
        for (j = round - 1; j >= 0; j--)
        {

            // step C -> shifting
            if (arr[j] > val)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // agar val bada hai arr[j] se, then no need to do anything
                break;
            }
        }

        // step D -> Copy
        arr[j + 1] = val;
    }

    // print
    cout << "after sorting the array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}