#include <iostream>
using std::cout;
using std::cin;

// Haven't fully learned error checking yet so strings will break the program

int main() {
    float firstNumber;
    float secondNumber;
    bool keepGoing = true;
    int answer;
    while (keepGoing) {
        cout << "Enter a Number:";
        cin >> firstNumber;
        cout << "You've entered " << firstNumber << ".\nEnter another number: ";
        cin >> secondNumber;

        if (firstNumber < secondNumber) {
            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber << '.';
        } else if (firstNumber > secondNumber) {
            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << '.';
        } else {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '.';
        }
        cout << "Would you like to try again? (0 for NO and 1 for YES)";
        cin >> answer;
        if (answer == 0) {
            keepGoing = false;
        }
    }    
}