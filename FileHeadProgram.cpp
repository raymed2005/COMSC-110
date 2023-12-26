// *******************************************************************************
// Assignment 7A: File Head Program
// Author: Rayyan Ahmed
// Date: October 29, 2023
// ********************************************************************************
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void openFile(ifstream&, string);

int main(){
    string fileName;
    string currLine;
    int lineCount = 1;

    cout << "Enter file name: ";
    cin >> fileName;
    ifstream userFile;
    openFile(userFile, fileName);

    while(lineCount <= 10){
        getline(userFile, currLine);
        cout << "Line " << lineCount << ": " << currLine << endl;
        lineCount++;
    }
    if(userFile.eof()){
        cout << "Entire file has been displayed.";
    }
    userFile.close();
}

void openFile(ifstream& userFile, string fileName){
    userFile.open(fileName);
    if(userFile.is_open()){
        cout << "File has been opened successfully." << endl;
    } else {
        cout << "Error, could not open file.";
        exit(-1);
    }
}

