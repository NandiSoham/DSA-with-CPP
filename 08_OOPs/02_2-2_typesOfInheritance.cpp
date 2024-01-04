#include<iostream>
using namespace std;

// ----------------------- SINGLE INHERITANCE------------------------------

class Car {
public:
    string name;
    int weight;
    int age;

    void speedUp() {
        cout << "The car is going faster." << endl;
    }

    void pressBreak() {
        cout << "The car has stopped." << endl;
    }
};

class Lexus : public Car {
    
};

//-----------------------------------------------------------------------------

//--------------------------------- MULTI-LEVEL INHERITANCE-----------------------

class Fruit{
    public:
    string name;
};

class Mango:public Fruit{
    public:
    int weight;
};

class Alphanso:public Mango{
    public:
    int sugarLevel;
};

//---------------------------------------------------------------------------------

//--------------------------------- MULTIPLE INHERITANCE---------------------------

class Tiger{
    public:
    int speed;
};

class Lion{
    public:
    int strength;
    int speed;
};

class Liger: public Tiger, public Lion{
    public:
    int intelligence;
};

//---------------------------------------------------------------------------------

//--------------------------------- HEIRARCHICAL INHERITANCE---------------------------

class Car{
    public:
    int age;
    int weight;
    string name;

    void speedUp() {
        cout << "The car is going faster." << endl;
    }

};

class Lexus:public Car{

};

class Toyota:public Car{

};


int main() {

    // -------------------------- SINGLE INHERITANCE---------------------------
    Lexus NX350;
    NX350.speedUp();
    //-----------------------------------------------------------------------------

    //--------------------------------- MULTI-LEVEL INHERITANCE-----------------------
    Alphanso a1;
    cout << a1.name << " " << a1.weight << " " << a1. sugarLevel << endl;

    //--------------------------------------------------------------------------------------

    //--------------------------------- MULTIPLE INHERITANCE---------------------------
    Liger Max;
    cout << "Max's Strength is : "<<Max.strength << " Max's intelligence is : " << Max.intelligence <<endl;

    //using scope resolution operator to resolve the problem whose speed we want
    cout << " Max's speed is : " << Max.Tiger::speed << endl;

    //--------------------------------------------------------------------------------------

    //--------------------------------- HEIRARCHICAL INHERITANCE---------------------------
    Lexus NX350;
    NX350.speedUp();

    Toyota Camry;
    Camry.speedUp();

    //--------------------------------------------------------------------------------------

    

    return 0;
}
