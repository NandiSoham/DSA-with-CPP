#include<iostream>
using namespace std;

class Animal{
    public:
    //constructor
    Animal(){
        cout << "I am in Animal Constructor" <<endl;
    }
    virtual void speak(){
        cout << "speaking..." << endl;
    }
};

class Dog:public Animal{
    public:
    //constructor
    Dog(){
        cout << "I am in Dog Constructor" <<endl;
    }

    //override the function
    void speak(){
        cout << "barking..." << endl;
    }
};

int main()
{

    Animal* a1 = new Animal();
    Animal* a2 = new Dog();
    Dog* d1 = new Dog();
    Dog* d2 = (Dog*) new Animal();
    

    return 0;
}