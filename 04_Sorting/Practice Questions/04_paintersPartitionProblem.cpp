#include <iostream>
#include <numeric>
using namespace std;

bool isPossibleTime(int arr[], int n, int k, int sol)
{
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (arr[i] + timeSum > sol)
        {
            c++;
            timeSum = arr[i];
            if (c > k)
            {
                return false;
            }
        }
        else
        {
            timeSum += arr[i];
        }
    }
    return true;
}

long long findTime(int arr[], int n, int k)
{
    if (k > n)
    {
        return -1;
    }
    long long start = 0;
    long long end = accumulate(arr, arr + n, 0);
    long long ans = -1;
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (isPossibleTime(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    int N = sizeof arr / sizeof arr[0];
    int M = 2;

    cout << "Minimum time : " << findTime(arr, N, M) << endl;
    return 0;
}
