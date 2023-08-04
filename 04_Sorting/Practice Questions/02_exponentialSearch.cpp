#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int target)
{

    if (arr[0] == target)
    {
        return 0;
    }

    int i = 1;
    while (i < n && arr[i] <= target)
    {
        i *= 2; // doubling the index until it is greater than or equal to length
    }
    return binarySearch(arr, i / 2, min(i, n - 1), target);
}

int main()
{
    int a[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(a) / sizeof(int);
    int target = 56;
    int ans = exponentialSearch(a, n, target);

    cout << target << " is at index " << ans <<endl; 
    return 0;
}