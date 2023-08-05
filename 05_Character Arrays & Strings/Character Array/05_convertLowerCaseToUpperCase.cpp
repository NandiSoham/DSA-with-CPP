#include <iostream>
#include <string.h>
using namespace std;

void convertIntoLowerCase(char ch[]){
    int n = strlen(ch);
    for( int i = 0; i < n; i++){
        ch[i] = ch[i] - 'A' + 'a';
    }
}

void convertIntoUpperCase(char ch[]){
    int n = strlen(ch);
    for( int i = 0; i < n; i++){
        ch[i] = ch[i] - 'a' + 'A';
    }
}

int main(){
    char ch[100] = "soham";
    char ch2[100] = "NANDI";
    convertIntoUpperCase(ch);
    convertIntoLowerCase(ch2);

    cout << "after converting into uppercase: " << ch <<endl;
    cout << "after converting into lowercase: " << ch2 <<endl;

    return 0;
}