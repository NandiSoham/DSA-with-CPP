#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> v)
{
    int m = v.size();    // finding the column numbers
    int n = v[0].size(); // finding the rows numbers
    for (int startCol = 0; startCol < n; startCol++)
    {

        // even no of col then print top to bottom
        if ((startCol & 1) == 0)
        { // checking if element is odd or not
            for (int i = 0; i < m; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        else{
            //odd number of colum, then print bottom to top
            for(int i = m-1; i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    wavePrint(v);
    return 0;
}