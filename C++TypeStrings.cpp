// *******************************************************************************
// Assignment 8B: C++ Type Strings
// Author: Rayyan Ahmed
// Description: Part 2 Of The Assignment
// Status: Complete
// Date: November 12, 2023
// ********************************************************************************
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

string lower(string);
string upper(string);
int size(string);
char first(string);
char last(string);

int main(){
    string wordOne, wordTwo;
    cout << "Enter the first word: ";
    cin >> wordOne;
    cout << "Enter the second word: ";
    cin >> wordTwo;

    cout << endl << "Report For " << wordOne << endl;
    cout << "Lower Case: " << lower(wordOne) << endl;
    cout << "Upper Case: " << upper(wordOne) << endl;
    cout << "Total Characters: " << size(wordOne) << endl;
    cout << "First Character: " << first(wordOne) << endl;
    cout << "Last Character: " << last(wordOne) << endl;

    cout << endl << "Report For " << wordTwo << endl;
    cout << "Lower Case: " << lower(wordTwo) << endl;
    cout << "Upper Case: " << upper(wordTwo) << endl;
    cout << "Total Characters: " << size(wordTwo) << endl;
    cout << "First Character: " << first(wordTwo) << endl;
    cout << "Last Character: " << last(wordTwo) << endl;

    cout << endl << "Additional " << endl;
    int val = lower(wordOne).compare(lower(wordTwo));
    if(val == 0){
        cout << "Word Comparison: " << "Equal" << endl;
    } else {
        cout << "Word Comparison: " << "Not Equal" << endl;
    }

    cout << "Alphabetical Listing: " << endl;
    if(lower(wordOne) > lower(wordTwo)){
        cout << wordTwo << endl << wordOne;
    } else if (lower(wordOne) < lower(wordTwo)){
        cout << wordOne << endl << wordTwo;
    } else {
        cout << "Same Words";
    }
}

string lower(string word){
    string result = "";
    for(char c: word){
        result += tolower(c);
    }
    return result;
}

string upper(string word){
    string result = "";
    for(char c: word){
        result += toupper(c);
    }
    return result;
}

int size(string word){
    int result = 0;
    for(char c: word){
        result ++;
    }
    return result;
}

char first(string word){
    char letter = word.at(0);
    return letter;
}

char last(string word){
    char letter = word.at(word.size() - 1);
    return letter;
}