// *******************************************************************************
// Assignment 10C: Reference Pointer Swap
// Author: Rayyan Ahmed
// Date: December 1, 2023
// ********************************************************************************
#include <iostream>
using namespace std;

void referenceSwap(int&, int&);
void pointerSwap(int*, int*);

int main() {
    int num1 = 1, num2 = 2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    cout << "Before swapping nums: " << num1 << " and " << num2 << endl;
    referenceSwap(num1, num2);
    cout << "After swapping nums: " << num1 << " and " << num2 << endl;
    cout << "Before swapping pointers: " << *ptr1 << " and " << *ptr2 << endl;
    pointerSwap(ptr1, ptr2);
    cout << "After swapping pointers: " << *ptr1 << " and " << *ptr2 << endl;
}

void referenceSwap(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void pointerSwap(int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
