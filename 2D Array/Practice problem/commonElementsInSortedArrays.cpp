#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElement(int a[], int b[], int c[], int n1, int n2, int n3)
{
    set<int>st;
    vector<int> ans; // vector for storing output because in question it's asked in vector
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            //ans.push_back(a[i]);
            st.insert(a[i]);
            i++, j++, k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    //now I've iterated set, and in set there won't be any duplicate, so I'll now push in 'ans'
    for(auto i:st){
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    // int a[] = {1, 5, 10, 20, 40, 80};
    // int b[] = {6, 7, 20, 80, 100};
    // int c[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int a[] = {3,3,3,3};
    int b[] = {3,3,3,3};
    int c[] = {3,3,3,3};

    int n1 = sizeof(a) / sizeof(int);
    int n2 = sizeof(b) / sizeof(int);
    int n3 = sizeof(c) / sizeof(int);

    vector<int> result = commonElement(a, b, c, n1, n2, n3);

    cout << "Common Elements: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}