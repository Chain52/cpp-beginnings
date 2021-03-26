#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {
  string firstPhrase, secondPhrase;
  bool keepGoing = true;
  while (keepGoing) {
    cout << "Let's compare length of two phrases." << '\n';
    cout << "Please enter the first phrase to compare: ";
    getline(cin, firstPhrase);
    cout << "Please enter the second phrase to compare: ";
    getline(cin, secondPhrase);
    int firstLength = firstPhrase.length();
    int secondLength = secondPhrase.length();
    if (firstLength < secondLength) {
      cout << "The second phrase you entered is " << (secondLength - firstLength) << " letters longer than the first phrase.\n";
    } else if (firstLength > secondLength) {
      cout << "The first phrase you entered is " << (firstLength - secondLength) << " letters longer than the second phrase.\n";
    } else {
      cout << "Both phrases you entered are of equal length.\n";
    }

    string continuePhrases;
    bool errorChecking = true;
    cout << "Would you like to enter new phrases? (Y for yes; N for no) ";
    while (errorChecking) {
      getline(cin, continuePhrases);
      if (continuePhrases == "Y") {
        break;
      } else if (continuePhrases == "N") {
        keepGoing = false;
        break;
      } else {
        cout << "Please enter [Y]es or [N]o: ";
      }
    }
  }
}