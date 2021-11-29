/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Hernandez
 */

#include "std_lib_facilities.h"
using namespace std;
//main function
int main() {
    //necessary variable
    int num;
    //prompt the user to enter a number
    cout << "Please enter a number: ";
    cin >> num;
    //now check to see if the number the user inputted is even or odd
    if(num % 2 == 0) {
        cout << "The number " << num << " is even.";
    }
    else {
        cout << "The number " << num << " is odd.";
    }
    //end main
    return 0;
}