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
        cout << "The cat is eating ..." << endl;
    }
    void sleep(){
        cout << "The cat is sleeping ..." << endl;
    }

    //getter function
    int getWeight(){
        return weight;
    }

    //setter function
    void setWeight(int w){
        weight = w;
    }
};

int main(){
    // object creation

    // object creation by static memory
    Animal cat;  // creating an object of class animal named 'cat'
    
    cat.age = 6;
    cat.name = "Lucy";
    cout << "Age of cat is "<< cat.age <<endl;  //if I want to access any property of that object, I need to use dot operator (.) eg.- .age, .name 
    cout << "Name of cat is "<< cat.name << endl;

    cat.eat();
    cat.sleep();

    cat.setWeight(23);
    cout << "The weight of the cat is " << cat.getWeight() << endl;

    //object creation by dynamic memory

    return 0;
}