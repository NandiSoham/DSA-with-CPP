#include <iostream>
using namespace std;

//--------------------VISITED METHOD---------------------------
// void findMissingElement(int *a, int n){     //int *a: This is a pointer to an integer, denoted by *a. It means that the function expects an array (or a pointer to the first element of an array) of integers as the first argument. The * indicates that a is a pointer.
//     for(int i = 0; i < n; i++){
//         int index = abs(a[i]);//we're taking abs(absolute) value as we don't want -ve number in indexing.

//         //we'll check if index is -ve or not, if it's -ve that means it's visited    
//         if(a[index - 1] > 0){   //we're taking (index - 1) because generally indexing starts from 0 but we're doing from 1. In order to adjsut that we're doing (index -1) which is(1-1)  = 0
            
//             // if it's not -ve that means it's not visited , so we'll make it -ve in order to mark it as visited.
//             a[index-1] *= (-1);
//         }         
//     }

//     //our conclusion is all the positive numbers remain is the array is reflecting that those index are missing
//     for (int i = 0; i<n; i++){
//         if (a[i] > 0){      // this line means a[i] i.e., that particular element is >0 which mean it's +ve, that means it's not visited , that means that index is missing as number in the array
//             cout<< i+1 << " ";
//         }
//     }
// }

//----------------------------Sorting and Swapping----------------------------------

void findMissingElementBySortingAndSwapping(int *a, int n){
    int i = 0;
    while(i < n){
        int index = a[i] - 1;   //let's take an element index and in that we're soring a[i]. Now a[i] is the element and at the same time it's representing the corresponding index.Generally Indexing starts from 0, so instead of index = a[i] we have to write index = a[i-1]
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }
        else{
            i++;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] != i+1){
            cout << "the missing elements are: " << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    int arr [] = {1,3,5,3,4};
    n = sizeof(arr)/ sizeof(int);

    // findMissingElement(arr, n);
    findMissingElementBySortingAndSwapping(arr, n);
    return 0;
}