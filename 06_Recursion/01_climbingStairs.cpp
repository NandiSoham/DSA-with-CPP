#include <iostream>
using namespace std;

int climbingStairs(int n){
    //base case
    if(n==0 || n==1)
        return 1;

    //recursive relation
    int numberOfWays = climbingStairs(n-1) + climbingStairs(n-2);
    return numberOfWays;
}

int main(){
    int n;
    cout << "Enter the number of stair where to land: ";
    cin >> n;
    
    int ans = climbingStairs(n);

    cout << "No. of possible ways to reach " << n << "th stair are: " << ans;
    return 0;
}