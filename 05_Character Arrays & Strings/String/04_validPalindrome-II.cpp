#include <iostream>
#include <string.h>
using namespace std;   

bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            } else{
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i <= j){
            if(s[i] == s[j]){
                //no need to remove
                i++;
                j--;
            } else{
                //s[i] != s[j]
                //in this condition, ya to i wala character remove karo, ya to j wala remove karo
                return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1); 
            }
        }
        return true;
    }


int main(){
    string s="abad";
    if(validPalindrome(s) == 1){
        cout<<"true"<<endl;
    }else{
        cout<< "false" << endl ;
    }
    return 0;
}