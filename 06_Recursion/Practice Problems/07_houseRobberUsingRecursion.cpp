#include <iostream>
#include <vector>
using namespace std;

int robHouse (vector<int> &nums, int i){
        //base case
        if(i >= nums.size()){
            return 0;
        }

        // 1 case solve kar do
        int robAmount1 = nums[i] + robHouse(nums, i+2);
        int robAmount2 = 0 + robHouse(nums, i+1);

        return max(robAmount1, robAmount2);
    }

int main(){
    vector<int> nums{1,2,3,1};

    int maxRobbedAmount = robHouse(nums, 0);
    cout << "Maximum amount that can be robbed is: " << maxRobbedAmount << endl;

    return 0; 

}