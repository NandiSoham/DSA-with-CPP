#include <iostream>
using namespace std;

int funcDivide(int divident, int divisor){
    int s = 0;
    int e = abs(divident);
    int mid = s+(e-s)/2;
    int ans = 1;    //variable to store the answer

    while(s <= e){
        //perfect solution
        if(abs(mid*divisor) == abs(divident)){
            //found the exact value
            return mid;
        }

        //not perfect sol
        if(abs(mid*divisor) > abs(divident)){
            e=mid -1 ;  //search in left half
        } else if(abs(mid*divisor) < abs(divident)){
            ans = mid;
            s=mid+1;    // search for right half
        }
        mid = s+(e-s)/2;
    }
    if((divisor < 0 && divident < 0) || (divident> 0 && divisor > 0)){
        return ans;
    } else{
        return (-1)*ans;   //if negative numbers involved then multiply with minus sign.
    }
}

int main(){
    int divident = 22;
    int divisor = -7;

    int ans = funcDivide(divident, divisor);
    cout << "The result of division is: "<<ans<<endl;
    return 0;
}