// *******************************************************************************
// Assignment 6B: Rainfall Statistics
// Author: Rayyan Ahmed
// Description: Returns months with highest and lowest rain, total and average rainfall
// Status: Complete
// Date: October 20, 2023
// ********************************************************************************
#include <iostream>
using namespace std;
int main(){
    double months[12];
    double highest = 0, lowest = INT_MAX, input;
    int highestMonth = 0, lowestMonth = 0;
    double totalRainfall = 0, averageRainfall = 0;
    for(int i = 1; i <= 12; i++){
        cout << "Enter rainfall for month " << i << ": ";
        cin >> input;
        while(input < 0){
            cout << "Please enter a positive number." << endl;
            cout << "Enter rainfall for month " << i << ": ";
            cin >> input;
        }
        totalRainfall += input;
        if(input < lowest){
            lowest = input;
            lowestMonth = i;
        }
        if(input > highest){
            highest = input;
            highestMonth = i;
        }
    }
    averageRainfall = totalRainfall/(12);
    cout << "The total rainfall for the year is: " << totalRainfall << endl;
    cout << "The average monthly rainfall is: " << averageRainfall << endl;
    cout << "The month with the highest amount of rain is month " << highestMonth << " with " << highest << endl;
    cout << "The month with the lowest amount of rain is month " << lowestMonth << " with " << lowest;
}