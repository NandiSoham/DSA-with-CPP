#include <iostream>
#include <unordered_map> 
using namespace std;

//----------------------------------------Approach-1---------------------------
// int findRepeating(int a[], int n){
//     for (int i=0 ;i<n; ++i){
//         bool isRepeated = false;    //we've taken the 'isRepeated' element to check if you got the repeated element or not and initialized it with false.
//         for(int j = i+1; j<n; j++){
//             if(a[i] == a[j]){
//                 isRepeated = true;
//                 cout<<"The repeating element is: "<<a[i + 1];
//                 break;
//             }
//         }
//     }
//     return -1;
// }

//--------------------------------USING HASHING---------------------------------------------

int findRepeatingUsingHashing(int arr[], int n){
    unordered_map<int, int> hash;    //declaring hash atble
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;  // Corrected the syntax for incrementing the count in the hash map
    }

    //now I'll iterate through the table again
    for(int i = 0; i < n; i++){
        //check if in table for each element the corresponding count is >1 or not, if it is then that is repeated item and will return i+1(because our indexing starting here from 1)
        if(hash[arr[i]] > 1){
            return i + 1;
        }
    }
    return -1;
}


int main(){
    int n;
    int arr [] = {1,5,3,5,3,4};
    n = sizeof(arr)/ sizeof(int);

    // findRepeating(arr, n);
    int result = findRepeatingUsingHashing(arr, n);

    if (result != -1) {
        cout << "The first repeating element is: " << arr[result - 1] << endl;
    } else {
        cout << "No repeating element found." << endl;
    }
    return 0;
}