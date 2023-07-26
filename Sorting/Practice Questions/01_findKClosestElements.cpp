// leetcode 658

// two pointer approach
class Solution
{
public:
    vector<int> twoPointerMethod(vector<int> &arr, int k, int x)
    {
        int l = 0;
        int h = arr.size() - 1;

        while (h - l >= k)
        {
            if (x - arr[l] > arr[h] - x)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        // using temporary vector to store and return ans
        //  vector<int> ans; // this is subarray where our k number of elements will be stored, as we need to return a vector, so we are taking a vector as 'ans'
        //  for(int i=l; i<=h; i++){
        //      ans.push_back(arr[i]);
        //  }
        //  return ans;

        // instead of that we can use STL of c++ also
        return vector<int>(arr.begin() + l, arr.begin() + h + 1);
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        return twoPointerMethod(arr, k, x);
    }
};

// another approach -> BS + 2 pointer

class Solution
{
public:
    int lowerBound(vector<int> arr, int x)
    {
        int start = 0;
        int end = arr.size() - 1;
        int ans = end;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= x)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (x > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
    vector<int> bs_and_two_pointer(vector<int> &arr, int k, int x)
    {

        // lower bound
        int h = lowerBound(arr, x);
        int l = h - 1;

        while (k--)
        {
            if (l < 0)
            {
                h++;
            }
            else if (h >= arr.size())
            {
                l--;
            }
            else if (x - arr[l] > arr[h] - x)
            {
                h++;
            }
            else
            {
                l--;
            }
        }

        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        return bs_and_two_pointer(arr, k, x);
    }
};