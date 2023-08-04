#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a{1,2,3,4,6,8};
  vector<int> b{3,4,9,10};
  vector<int> ans;

  //outer loop on a vector
  for(int i=0; i<a.size(); i++){
    int element = a[i];

    //for each element of 'a', run loop on 'b'
    for(int j=0; j<b.size(); j++){
      if(element == b[j]){
        b[j] = -1;
        ans.push_back(element);
      }
    }
  }

  //print ans
  cout<< "after intersection the array is: " << endl;
  for(auto value: ans){
    cout << value << " ";
  }
  
}