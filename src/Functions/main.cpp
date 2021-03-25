#include <iostream>
#include "functions.h"
using std::cout;

int main() {
    int total = add(3, 4);
    cout << "3 + 4 is " << total << '\n';

    double totalDouble = add(1.2, 3.4);
    cout << "1.2 + 3.4 is " << totalDouble << '\n';
    
    auto totalOfThree = add(1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 is " << totalOfThree << '\n';

    if (test(true)) {
        cout << "true passes the test" << '\n';
    }
    if (test(3.2)) {
        cout << "3.2 passes the test" << '\n';
    }
}