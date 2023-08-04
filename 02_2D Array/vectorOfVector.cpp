#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > arr;   //in outer vector 'vector int' type data will be pushed and in inner vector 'int' type data will be pushed
    
    vector<int> a{1,2,3};
    vector<int> b{4,5,6, 8};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

// how to find no of rows in vactor => arr.size()
// how to find no of clos in vactor => arr ke 0th element pe jo vector h uska size. we're using arr[0] because all the rows have same number of column, even if we take arr[1], it will work.
// But the previous method would work only if no of columns are same in every row, but what if no. of cols is diff. => thn instead of arr[0], we'll use arr[i] which implies how many columns are there in particular ith row.
    for(int i = 0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //-----------------------------------ANOTHER WAY-------------------------------------

    int rows = 3;
    int cols = 5;
    vector<vector<int> > vec(3, vector<int>(5,0));  //this line explaination CODEHELP week3 lec3 , time around 1:40 

    for(int i = 0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }


    return 0;

}