#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout << "speaking..." << endl;
    }
};

class Dog:public Animal{
    public:
    //override the function
    void speak(){
        cout << "barking..." << endl;
    }
};

int main()
{
    Animal a;
    a.speak();

    Dog chase;
    chase.speak(); 

    return 0;
}