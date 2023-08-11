#include <iostream>       
#include <string.h>       
#include <algorithm>      
#include <vector>         
using namespace std;     

int findMinDifference(vector<string>& timePoints) {

    // Step 1: Converting time into minutes int value

    vector<int> minutes;                   // Create a vector to store time in minutes
    for(int i = 0; i < timePoints.size(); i++){
        string current = timePoints[i];    // Get the current time point as a string
        int hours = stoi(current.substr(0,2)); // Extract hours from the string and convert to integer
        int min = stoi(current.substr(3,2));   // Extract minutes from the string and convert to integer
        int totalMin = hours*60 + min;      // Calculate total minutes by converting hours to minutes and adding minutes
        minutes.push_back(totalMin);        // Store the total minutes in the vector
    }

    // Step 2: Sorting

    sort(minutes.begin(), minutes.end());  // Sort the vector of minutes in ascending order

    // Step 3: Calculating differences and finding the minimum one

    int minDiff = INT_MAX;                  // Initialize a variable to store the minimum time difference
    int n = minutes.size();                 // Get the number of time points
    for(int i = 0; i< n-1; i++){
        int diff = minutes[i+1] - minutes[i]; // Calculate the time difference between consecutive time points
        minDiff = min(minDiff, diff);       // Update minDiff with the smaller of the current minDiff and diff
    }

    // Step 4: Handling circular time (midnight)

    int lastDiff1 = (minutes[0]+1440) - minutes[n-1]; // Calculate the time difference between the last and first time points (considering circular time)
    int lastDiff2 = minutes[n-1] - minutes[0];
    int finalLastDiff = min(lastDiff1, lastDiff2);
    minDiff = min(finalLastDiff, minDiff);       // Update minDiff with the smaller of the current minDiff and lastDiff
 
    return minDiff;                         // Return the minimum time difference
}

int main() {
    // Sample input: a vector of time points in HH:MM format
    vector<string> timePoints = {"23:59", "00:00", "12:34", "06:15", "18:45"};

    // Call the findMinDifference function to calculate the minimum time difference
    int minDiff = findMinDifference(timePoints);

    // Print the result
    cout << "Minimum Time Difference: " << minDiff << " minutes" << endl;

    return 0; // Exit the program
}
