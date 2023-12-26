// *******************************************************************************
// Assignment 7B: File Display Program
// Author: Rayyan Ahmed
// Description: Displays user program, wait for input after 24 lines
// Status: Complete
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
    cin.ignore();
    ifstream userFile;
    openFile(userFile, fileName);

    int userKey;
    while(getline(userFile, currLine)){
        cout << currLine << endl;
        if(lineCount % 24 == 0){
            cout << "Press enter to continue displaying.";
            cin.get();
        }
        lineCount++;
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
