#include<iostream>
using namespace std;

//---------------------- FUNCTION OVERLOADING-----------------------------
// class Maths{
//     public:
//     int sum(int a, int b){
//         return a + b;
//     }

//     int sum(int a, int b, int c){
//         return a + b + c;
//     }

//     int sum(int a, float b){
//         return a + b;
//     }
// };

//--------------------------------------------------------------------------

//---------------------- OPERATOR OVERLOADING-----------------------------

class Operator{
    public:
    int val;

    void operator+(Operator& obj2){
        int valueObj1 = this->val;
        int valueObj2 = obj2.val;
        cout << (valueObj2 - valueObj1) << endl;
    }
};

//--------------------------------------------------------------------------

int main()
{

    //---------------------- FUNCTION OVERLOADING-----------------------------

    // Maths obj;

    // cout << obj.sum(2,5) << endl;
    // cout << obj.sum (2, 7, 4) << endl;
    // cout << obj.sum (3, 5.32f) << endl;

    //--------------------------------------------------------------------------

    Operator obj1;
    Operator obj2;

    obj1.val = 7;
    obj2.val = 9;

    // now suppose I have a requirement that whenever we'll perform obj1 + obj2 it should give me the difference between obj1 and obj2
    obj1 + obj2;

    return 0;
}