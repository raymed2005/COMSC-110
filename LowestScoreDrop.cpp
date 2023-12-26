// *******************************************************************************
// Assignment: Lowest Score Drop
// Author: Rayyan Ahmed
// Date: October 7, 2023
// ********************************************************************************
#include <iostream>
using namespace std;
void getScore(double &score){
    cout << "Enter a score: ";
    cin >> score;
    while(score < 0 || score > 100){
        cout << "Enter a valid score (0 - 100): ";
        cin >> score;
    }
}
void calcAverage(double score1, double score2, double score3, double score4, double score5, double lowest){
    double average = 0;
    average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;
    cout << "Average of 4 highest score: " << average;

}
double findLowest(double score1, double score2, double score3, double score4, double score5){
    double lowest = 100;
    double scores[5] = {score1, score2, score3, score4, score5};
    for(int i = 0; i < 5; i++){
        if (scores[i] < lowest){
            lowest = scores[i];
        }
    }
    return lowest;
}

int main(){
    double score1, score2, score3, score4, score5;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    double lowest = findLowest(score1, score2, score3, score4, score5);
    calcAverage(score1, score2, score3, score4, score5, lowest);
}
