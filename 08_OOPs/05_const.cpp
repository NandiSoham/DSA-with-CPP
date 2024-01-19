#include<iostream>
using namespace std;
int main()
{
    //concept -1
    const int x = 10;
    //initialize can be done but we can't re-assign a vlue
    // x = 10;
    cout << "value of x is: " << x << endl;

    //concept -2: const with pointer
    const int *a = new int(2); //const data with NON-CONST pointer
    // int const *a = new int(2); //same as line no. 12 
    cout << "*a initial value: " << *a << endl;
    // *a = 7;
    // cout << "*a: " << *a << endl;
    int b = 20;
    a = &b;
    // *a = 20;
    cout << "Now *a is: " << *a << endl;

    //concept 3 - const pointer but non-const data
    int *const m = new int(2);
    cout << "*m: " << *m << endl;
    *m = 20;
    cout << "*m after modification: " << *m << endl;
    // int n = 50;
    // m = &n; //won't run because pointer is CONST 


    //concept 4 - CONST pointer and CONST data
    const int *const y = new int(9);
    cout << "initially *y is: " <<*a <<endl;
    int *y = 60; //will throw error
    int z = 100;
    y = &b;     //will thrrow error
    return 0;
}