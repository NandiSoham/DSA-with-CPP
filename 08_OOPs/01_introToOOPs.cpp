#include <iostream>
using namespace std;

class Animal{
    //state or properties

    private:
    int weight;

    public: 
    int age;
    string name;

    // behaviour or method
    void eat(){
        cout << "The animal is eating ..." << endl;
    }
    void sleep(){
        cout << "The animal is sleeping ..." << endl;
    }

    //getter function
    int getWeight(){
        return weight;
    }

    //setter function
    void setWeight(int weight){
        this -> weight = weight;
    }

    //constructor
    //default constructor
    Animal(){

        this->age = 0;  // initializing with default value
        this->name = "";    // initializing with default value
        
        cout << "constructor called" << endl;
    }

    //parameterized constructor
    Animal(int age){
        this->age = age;
        cout << "parametrized constructor called" << endl;
    }

    //copy constructor
    Animal(Animal& obj){
        this->age = obj.age;
        this->name = obj.name;
        cout << "Copy Constructor Called!"<<endl;
    }

    //creating destructor
    ~Animal() {
        cout << "Destructor Called!"<<endl;
    }
};

int main(){
    // object creation

    // object creation by static memory
    Animal cat;  // creating an object of class animal named 'cat'
    
    cat.age = 6;
    cat.name = "Lucy";
    cout << "Age of cat is "<< cat.age <<endl;  //if I want to access any property of that object, I need to use dot operator (.) eg-> .age, .name 
    cout << "Name of cat is "<< cat.name << endl;

    cat.eat();
    cat.sleep();

    cat.setWeight(23);
    cout << "The weight of the cat is " << cat.getWeight() << endl;

    //object creation by dynamic memory
    Animal* dog = new Animal;

    (*dog).age = 15;
    (*dog).name = "chase";

    //another way
    dog -> age = 15;
    dog -> name = "rani";
    dog -> eat();
    dog -> sleep();

    //object call to check if parameterized constructor is getting called or not, here we need to pass the value of age as parameter, because we have passed in parameterized constructor also
    Animal* lion = new Animal(23);

    // calling 'Copy Constructor'
    Animal tiger(cat); 
    Animal lepord = cat;
    // both of the avobe syntax are correct to call copy constructor

    // manually destructor calling (memory deallocation)
    delete dog;
    delete lion;
    cout << "manually destructor calling for objects created using dynamic memory" << endl;

    return 0;
}