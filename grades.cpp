// grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int numberOfLetterGrades(vector<char> letterGrades, int number, char grade) {
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    switch(grade){
    case 'A': 
        for (int val : letterGrades) {
            if (val == 65) {
                countA++;
            }
        }
        return countA;
        break;
    case 'B':
        for (int val : letterGrades) {
            if (val == 66) {
                countB++;
            }
        }
        return countB;
        break;
    case 'C':
        for (int val : letterGrades) {
            if (val == 67) {
                countC++;
            }
        }
        return countC;
        break;
    case 'D':
        for (int val : letterGrades) {
            if (val == 68) {
                countD++;
            }
        }
        return countD;
        break;
    case 'F': 
        for (int val : letterGrades) {
            if (val == 70) {
                countF++;
            }
        }
        return countF;
        break;
    
    }
}


int main()
{
    int number = 0;
    cout << "Please input the number of grades to be read in (1-30)" << endl;
    cin >> number;
    cout << "All grades must be upper case A B C D or F" << endl;
    vector<char>letterGrades;
    
    for (int i = 1; i <= number; i++) {
        char grade = ' ';
        cout << "Input a grade: " << endl;
        cin >> grade;
        letterGrades.push_back(grade);
    }

    int countA = numberOfLetterGrades(letterGrades, number, 'A');
    int countB = numberOfLetterGrades(letterGrades, number, 'B');
    int countC = numberOfLetterGrades(letterGrades, number, 'C');
    int countD = numberOfLetterGrades(letterGrades, number, 'D');
    int countF = numberOfLetterGrades(letterGrades, number, 'F');

    cout << "\nNumber of A = " << countA << endl;
    cout << "Number of B = " << countB << endl;
    cout << "Number of C = " << countC << endl;
    cout << "Number of D = " << countD << endl;
    cout << "Number of F = " << countF << endl;


    
}
