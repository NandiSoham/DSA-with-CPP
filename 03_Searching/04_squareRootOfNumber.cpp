#include <iostream>
using namespace std;

int findSqrt(int n){
    int s = 0;
    int e = n;
    int mid = s+ (e-s)/2;
    int target = n;
    int ans = -1;

    while(s <= e){
        if (mid*mid == target){
            return mid;
        } else if(mid*mid > target){
            //search in left half
            e=mid -1;
        }
        else if(mid*mid < target){
            //store the ans
            ans = mid;
            //search on right half
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n ;


    int ans = findSqrt(n);
    
    int precision;
    cout << "Enter the number of floating digits you want: ";
    cin >> precision;

    double finalAns = ans;
    double step = 0.1;
    for(int i=0; i < precision; i++){
        for(double j = finalAns; j*j <= n; j = j+step){
            finalAns = j;
        }
        step = step/10;
    }
    cout << "the ans is: "<< finalAns << endl;

    return 0;
}