#include<iostream>
using namespace std;

// when parent class is public
class Animal{

    public:
        int age;
};

class Dog:public Animal{
    
};

class Cat:protected Animal{
    public:
    print(){
        cout << this->age;
    }
};

class Lion:private Animal{
    public:
    print(){
        cout << this->age;
    }
};


int main()
{
    // inherit public (parent) -> public (mode of inheritance)
    Dog chase;
    chase.age;
    cout << "age getting called"<< endl;

    // inherit public (parent) -> protected (mode of inheritance)
    Cat Lucy;
    Lucy.print();

    //inherit public (parent) -> private (mode of inheritance)
    Lion Leo;
    cout << Leo.age;
    Leo.print();


    return 0;
}