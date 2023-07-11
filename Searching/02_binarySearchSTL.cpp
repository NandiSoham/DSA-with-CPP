#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(arr, arr + size, 7))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found. " << endl;
    }

    return 0;
}