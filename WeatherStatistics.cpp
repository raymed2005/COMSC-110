// *******************************************************************************
// Assignment: Weather Statistics
// Author: Rayyan Ahmed
// Date: November 16, 2023
// ********************************************************************************
#include <iostream>
using namespace std;

struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

void getData(string monthName, WeatherData monthData);
void displayData (string monthName, WeatherData monthData);
double highest = 0, lowest = INT_MAX;
double yearTotalRainfall = 0, yearTemperatureAverage = 0;
string highestMonth, lowestMonth;

int main(){
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    WeatherData monthlyData[12];

    for(int i = 0; i < 12; i++){
        getData(months[i], monthlyData[i]);
        cout << endl;
    }

    cout << "Total rainfall for the year is " << yearTotalRainfall << " inches with an average monthly rainfall of " << (yearTotalRainfall / 12) << " inches" << endl;
    cout << "The highest temperature recorded for the year is " << highest << " degrees in " << highestMonth << endl;
    cout << "The lowest temperature recorded for the year is " << lowest << " degrees in " << lowestMonth << endl;
    cout << "The average of all monthly temperatures is " << (yearTemperatureAverage / 12);
}

void getData(string monthName, WeatherData monthData){
    cout << "Enter data for " << monthName << endl;
    cout << "Rainfall (in Inches): ";
    cin >> monthData.totalRainfall;
    yearTotalRainfall += monthData.totalRainfall;

    cout << "Highest Temperature (in Fahrenheit): ";
    cin >> monthData.highTemperature;
    if(monthData.highTemperature < - 100 || monthData.highTemperature > 140){
        while(monthData.highTemperature < - 100 || monthData.highTemperature > 140){
        cout << "Enter a value between -100 and 140 degrees Fahrenheit." << endl;
            cout << "Highest Temperature (in Fahrenheit): ";
            cin >> monthData.highTemperature;
        }
    }

    if(monthData.highTemperature > highest){
        highest = monthData.highTemperature;
        highestMonth = monthName;
    }

    cout << "Lowest Temperature (in Fahrenheit): ";
    cin >> monthData.lowTemperature;
    if(monthData.lowTemperature < - 100 || monthData.lowTemperature > 140){
        while(monthData.lowTemperature < - 100 || monthData.lowTemperature > 140){
        cout << "Enter a value between -100 and 140 degrees Fahrenheit." << endl;
            cout << "Lowest Temperature (in Fahrenheit): ";
            cin >> monthData.lowTemperature;
        }
    }

    if(monthData.lowTemperature < lowest){
        lowest = monthData.lowTemperature;
        lowestMonth = monthName;
    }

    monthData.averageTemperature = (monthData.highTemperature + monthData.lowTemperature) / 2;
    yearTemperatureAverage += monthData.averageTemperature;
}
