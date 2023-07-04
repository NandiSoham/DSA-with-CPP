#include <iostream>
#include<vector>
using namespace std;

int main() {
  int a[] = {1, 3, 4, 6};
  int size_a = 4;
  int b[]= {2,5,7};
  int size_b = 3;

  vector<int> ans;    //we're initializing vector but we can use array also here

  //push all elements of a
  for(int i=0; i<size_a; i++){
    ans.push_back(a[i]);
  }

  //push all elements of b
  for(int i=0; i<size_b; i++){
    ans.push_back(b[i]);
  }

  //print ans
  cout << "after union the ans array is: " << endl;
  for(int i=0; i <ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  
  return 0;
}