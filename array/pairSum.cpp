#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a{10, 20, 40, 60, 70};
    vector<int> ans;
    int sum = 80;


    //print all pairs
    //outer loop which will traverse for each elements
    for(int i=0; i<a.size(); i++){
        int elementOne = a[i];

        //for each elements, will traverse on aage wale elements
        for(int j=i+1; j<a.size(); j++){
            //printing all possible pairs
            //cout << "(" << element << " , " << a[j] << ")" << endl;

            if(elementOne + a[j] == sum){
                cout << "Pair found: " << "(" << elementOne << " , " << a[j] << ")" <<endl; 
            }
        }
    }
    return 0;
}