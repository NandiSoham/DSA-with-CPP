#include<iostream>
using namespace std;

class Animal{
    private:
        int age;
        int weight;

    public:
        void eat(){
            cout<<"Eating..." << endl;
        }

        void setAge(int age){
            this->age = age;
        }

        int getAge(){
            return this->age;
        }
}

int main()
{
    return 0;
}