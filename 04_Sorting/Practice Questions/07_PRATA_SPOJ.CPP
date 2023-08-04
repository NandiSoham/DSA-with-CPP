#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSol(vector<int>cooksRank, int nP, int mid){
    int currnP = 0; //currently count of prata which is initialized with 0.
    for(int i =0; i<cooksRank.size(); i++){ //traversing a loop through all the cooks to see who can cook how many pratas in assigned time
        int R = cooksRank[i]; //need to assign prata to 1st cook, for that we want the rank of 1st cook, which we'll get from cooksRank[i]
        int j = 1; // our formula was R + 2R + 3R + 4R...nPR,  for counting this 1, 2, 3, ..,nP we're taking this 'j' variable
        int timeTaken = 0;

        while(true){
            if(timeTaken + j*R <= mid){     //j*R is basically that R, 2r,3r... So if till now timeTaken + jR <= mid(assigned time) then - 
                currnP ++; //increse the current prata count which means we're asking cook to make prata
                timeTaken += j*R;    //this line is keep updaing and track of time cooks are taking 
                j++; // once c1 cook is done, then calculation of c2 cook will start the formula will start from 2R + 4R+ 6R..., so we're incrementing j here
            } else{
                //this else part is defining when takenTime +j*R > mid which means cooks taking more than than assigned time, so we'll not execute and break
                break;
            }
        }
        //now we'll check, if no of current prata(currnP) at this moment is >= no. of prata asked to make(nP), then we'll return true otherwise return false
        if(currnP > nP){
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>cooksRank, int nP){
    int start = 0;
    int end; 
    //how will you get end which is maxtime?
    //step-1: find cook with max rank
    //step-2: find no. of prata
    //step-3: will find how much time the least efficient cook(with max rank) will take to make all prata
    // for that we'll find out the time using the formula given in ques i.e. R+2R+3R+...+nPR
    // = R[{nP * (np + 1) } / 2]   here R = highestRank
    int hightestRank = *max_element(cooksRank.begin(), cooksRank.end());
    end = hightestRank * (nP * (nP+1)/2);
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossibleSol(cooksRank, nP, mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int T;  // number of test cases
    cin >> T;
    while(T--){    // loop for all test cases
        int nP; //number of Prata
        int nC; //number of cooks
        cin >> nP >> nC;    //taking input for number of prata and cooks
        vector<int>cooksRank;   // to store ranking of cooks

        while(nC--){
            int R;  //variable to take ranks input
            cin >> R; //taking ranks input
            cooksRank.push_back(R); // storing ranks in vector array;
            
        }
        cout << minTimeToCompleteOrder(cooksRank, nP) << endl;
    }
    return 0;
}