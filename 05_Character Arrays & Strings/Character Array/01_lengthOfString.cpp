#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}


int main(){

    char name[100];
    cout << "Enter your name: ";
    cin >> name ;

    cout << "length is: " << getLength(name) << endl;

    //but there is an inbuild function 'strlen' with that also we can get the length of that string
    //cout<< "length using strlen is: " << strlen(name) << endl;

    return 0;
}