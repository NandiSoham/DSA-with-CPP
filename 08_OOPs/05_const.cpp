#include<iostream>
using namespace std;
int main()
{
    const int x = 10;
    //initialize can be done but we can,t re-assign a vlue
    // x = 10;
    cout << "value of x is: " << x << endl;

    //const with pointer
    const int *a = new int(); //const data with NON-CONST pointer
    cout << "*a initial value: " << *a << endl;
    // *a = 2;
    // cout << "*a: " << *a << endl;
    int b = 5;
    a = &b;
    // *a = 20;
    cout << "Now *a is: " << *a << endl;
    return 0;
}