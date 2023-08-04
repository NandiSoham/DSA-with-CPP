#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a{10, 20, 30, 40, 60, 70, 80, 90};
    int sum = 110;


    //print all pairs
    //outer loop which will traverse for each elements
    for(int i=0; i<a.size(); i++){
        int elementOne = a[i];

        //for each elements, will traverse on aage wale elements
        for(int j=i+1; j<a.size(); j++){
            //printing all possible pairs
            //cout << "(" << element << " , " << a[j] << ")" << endl;
            int elementTwo = a[j];

            for(int k=j+1; k<a.size(); k++){
                int elementThree = a[k];
                if(elementOne + elementTwo + elementThree == sum){
                    cout << "Pair found: " << "(" << elementOne << " , " << elementTwo << " , " << elementThree << ")" <<endl; 
            }
            }
            
        }
    }
    return 0;
}