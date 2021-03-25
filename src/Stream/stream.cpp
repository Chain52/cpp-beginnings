#include <iostream>
using std::cout;
using std::cin;

int main() {
    cout << "--------------------------\n";
    cout << "Hello!" << '\n';
    cout << "I am testing the standard input so I'd like to do 3 things: \n\t Floats: ";
    float floatingNumber = 4.7;
    cout << floatingNumber << "\n\t Arithmatic: ";
    int floatToIntArithmatic = (floatingNumber + 2) * 10;
    cout << floatToIntArithmatic << "\n\t Escaped Quote: \"I am currently learning C++ because I want to build a game engine from scratch for fun and to show my skills.\"\n";
    cout << "--------------------------\n\n";
    cout << "--------------------------\n" << "Now lets try testing out the keyboard input!\n" << "Enter your favorite number: ";
    cin >> floatingNumber;
    cout << '\n' << floatingNumber << " - Decent choice of number! My favorite number would have to be 52.\n";
    cout << "--------------------------";
}