// *******************************************************************************
// Assignment 8A: C Type Strings
// Author: Rayyan Ahmed
// Description: Part 1 Of The Assignment
// Status: Complete
// Date: November 12, 2023
// ********************************************************************************
#include <iostream>
#include <cctype>
#include <cstring>
#include <climits>
using namespace std;

void lower(char[]);
void upper(char[]);
void size(char[]);
void first(char[]);
void last(char[]);

const int maxSize = 100;

int main(){
    char wordOne[maxSize], wordTwo[maxSize];
    cout << "Enter the first word: ";
    cin.getline(wordOne, maxSize);
    cout << "Enter the second word: ";
    cin.getline(wordTwo, maxSize);

    cout << endl << "Report For " << wordOne;
    cout << endl << "Lower Case: "; lower(wordOne);
    cout << endl << "Upper Case: "; upper(wordOne);
    cout << endl << "Total Characters: "; size(wordOne);
    cout << endl << "First Character: "; first(wordOne);
    cout << endl << "Last Character: "; last(wordOne);

    cout << endl << endl << "Report For " << wordTwo;
    cout << endl << "Lower Case: "; lower(wordTwo);
    cout << endl << "Upper Case: "; upper(wordTwo);
    cout << endl << "Total Characters: "; size(wordTwo);
    cout << endl << "First Character: "; first(wordTwo);
    cout << endl << "Last Character: "; last(wordTwo);

    cout << endl << endl << "Additional " << endl;
    int val = strcmp(wordOne, wordTwo);
    if(val == 0){
        cout << "Word Comparison: " << "Equal" << endl;
    } else {
        cout << "Word Comparison: " << "Not Equal" << endl;
    }

    cout << "Alphabetical Listing: " << endl;
    if(val > 0){
        cout << wordTwo << endl << wordOne;
    } else if (val < 0) {
        cout << wordOne << endl << wordTwo;
    } else {
        cout << "Same Words";
    }
}

void lower(char word[]){
    for(int i = 0; i < strlen(word); i++){
        cout << (char)tolower(word[i]);
    }
}

void upper(char word[]){
    for(int i = 0; i < strlen(word); i++){
        cout << (char)toupper(word[i]);
    }
}

void size(char word[]){
    cout << strlen(word);
}

void first(char word[]){
    cout << word[0];
}

void last(char word[]){
    cout << word[strlen(word) - 1];
}