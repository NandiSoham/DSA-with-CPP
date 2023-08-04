#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// positioning the cows
bool isPossibleSol(vector<int> arr, int mid, int k)
{
    int cowCount = 1;
    int pos = arr[0]; // Placing the first cow at the 1st position

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - pos >= mid)
        {                 // Current stall and 1st stall distance is >= mid
            cowCount++;   // Increment count of placed cows
            pos = arr[i]; // One more cow has been placed
        }
        if (cowCount == k) return true;
    }
    return false;
}

int aggressiveCows(vector<int> arr, int k, int n)
{
    // we'll sort the array for binary search
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr[arr.size() - 1] - arr[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSol(arr, mid, k))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int k = 3;
    vector<int> arr = {1, 2, 4, 8, 9};
    int n = arr.size();

    // Function call
    int ans = aggressiveCows(arr, k, n);
    cout << ans << endl;

    return 0;
}