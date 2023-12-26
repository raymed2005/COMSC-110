// *******************************************************************************
// Assignment: Math Tutor
// Author: Rayyan Ahmed
// Date: September 29, 2023
// ********************************************************************************
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int choice;
    while (choice != 5){
    cout << "1. Addition Problem" << endl;
    cout << "2. Subtraction Problem" << endl;
    cout << "3. Multiplication Problem" << endl;
    cout << "4. Division Problem" << endl;
    cout << "5. Quit" << endl;
    cout << endl << "Enter your choice (1-5): ";
    cin >> choice;
    if(choice == 1){
        int num1 = rand() % 1000, num2 = rand() % 1000;
        int answer = 0, sum = (num1 + num2);
        cout << num1 << " + " << num2 << " = ";
        cin >> answer;
        if(answer == sum){
            cout << "You are correct!";
        } else {
            cout << "The correct answer is " << sum;
        }
    } else if(choice == 2) {
        int num1 = rand() % 1000, num2 = rand() % 1000;
        while(num1 < num2){
            num1 = rand() % 1000;
            num2 = rand() % 1000;
        }
        int answer = 0, difference = (num1 - num2);
        cout << num1 << " - " << num2 << " = ";
        cin >> answer;
        if(answer == difference){
            cout << "You are correct!";
        } else {
            cout << "The correct answer is " << difference;
        }
    } else if (choice == 3) {
        int num1 = rand() % 1000, num2 = rand() % 1000;
        int answer = 0, product = (num1 * num2);
        cout << num1 << " x " << num2 << " = ";
        cin >> answer;
        if(answer == product){
            cout << "You are correct!";
        } else {
            cout << "The correct answer is " << product;
        }
    } else if (choice == 4) {
        double num1 = static_cast<double>(rand() % 1000), num2 = static_cast<double>(rand() % 1000);
        double answer = 0, quotient = num1 / num2;
        cout << "Please round your answer to 2 decimal places" << endl << num1 << " / " << num2 << " = ";
        cin >> answer;
        if(fabs(answer - quotient) < 0.01){
            cout << "You are correct!";
        } else {
            cout << "The correct answer is " << std::fixed << setprecision(2) << quotient;
        }
    } else if (choice == 5) {
        cout << "Thank you for using the Math Tutor.";
        exit(0);
    } else {
        cout << "Error, please enter a number between 1-5:" << endl;
    }
    cout << endl << endl;
    }
}
