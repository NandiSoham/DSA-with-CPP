#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
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
    Animal* a1 = new Animal();
    a1->speak();

    Dog* d1 = new Dog();
    d1->speak();

    Animal* a2 = new Dog();
    a2->speak(); 

    Dog* d2 = (Dog* )new Animal();
    d2->speak();

    return 0;
}