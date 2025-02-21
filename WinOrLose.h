#ifndef WINORLOSE_H
#define WINORLOSE_H
#include "ActualNum.h"
#include "TotalChances.h"

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <limits>
using namespace std;

void WinOrLose(){
    int A, B;

    // prompt user to enter integer A and b
    cout << endl;
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;

    int X = ActualNum(A, B);
    int total_chances = TotalChances(A, B);
    int guess;

    cout << endl;
    cout << "YOU ONLY HAVE "
        << total_chances
        << " CHANCES";
    
    int i = 0;
    while (true){
        if (i < total_chances){
            cout << endl;
            cout << "GUESS: ";

            // loop prompt for guess as long as a non-integer is entered
            while (!(cin >> guess)){
                cout << endl;
                cout << "INVALID";
                cout << endl;
                cout << "GUESS: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (guess > X){
                cout << endl;
                cout << "TOO HIGH";
            } else if (guess < X){
                cout << endl;
                cout << "TOO LOW";
            } else{
                cout << endl;
                cout << "YOU'RE SAVED FOR NOW"; // ends loop when user guess correctly within given # of chances
                break;
            }

        } else{
            cout << endl << endl;
            cout << "YOU'LL ROT"; //ends loop when user fail to guess w/in given # of chances
            break;
        }

        i++;
    }
}

#endif