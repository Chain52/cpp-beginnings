#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;

int main() {
    srand((unsigned) time(0));
    int secret = (rand() % 10) + 1;
    int guess;
    bool keepGoing = true;
    while (keepGoing) {
        cout << "Guess my number (1-10): ";
        cin >> guess;
        if (guess < secret) {
            cout << "The number you've guessed is too low. Please try again.\n";
        } else if (guess > secret) {
            cout << "The number you've guessed is too high. Please try again.\n";
        } else {
            keepGoing = false;
            cout << "Congradulations! You got it!";
        }
    }
}