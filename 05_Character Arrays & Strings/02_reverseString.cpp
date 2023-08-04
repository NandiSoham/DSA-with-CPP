#include <iostream>
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

void reverseString(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
    
}

int main(){
    char name[100];
    cout << "Enter your name: ";
    cin >> name ;

    cout << "intitally string is: " << name << endl;
    reverseString(name);
    cout << "after reversing the string is: " << name << endl;

    return 0;
}