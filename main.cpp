#include "src/Stream/stream.h"
#include "src/ControlFlow/controlFlow.h"
#include "src/ControlFlow/guessMyNumber.h"
#include "src/Function/main.h"
#include "src/Collection/string.h"
#include "src/Collection/compareLength.h"
#include "src/Collection/collection.h"
#include "src/Classes/Classes.h"

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <exception>

int main() {
  bool keepGoing = true;

  while (keepGoing) {
    bool restart = false;
    int option;
    
    cout << "Please select from options below to experience one of the modules:\n";
    cout << "\t1. IO Stream Basics\n";
    cout << "\t2. Number Comparisons\n";
    cout << "\t3. Guess the Number\n";
    cout << "\t4. Functions and Header Basics\n";
    cout << "\t5. Greeting\n";
    cout << "\t6. Phrase Comparisons\n";
    cout << "\t7. Collection Basics\n";
    cout << "\t8. Bank Transactions\n";

    try {
      cin >> option;
    } catch (std::exception& e) {
      std::cerr << e.what();
      return -1;
    }

    switch (option) {
    case 1: {
      Stream stream;
      stream.run();
    }
      break;
    case 2: {
      ControlFlow controlFlow;
      controlFlow.run();
    }
      break;
    case 3: {
      GuessMyNumber guessMyNumber;
      guessMyNumber.run();
    }
      break;
    case 4: {
      Functions functions;
      functions.run();
    }
      break;
    case 5: {
      StringC stringC;
      stringC.run();
    }
      break;
    case 6: {
      CompareLength compareLength;
      compareLength.run();
    }
      break;
    case 7: {
      Collection collection;
      collection.run();
    }
      break;
    case 8: {
      Classes classes;
      classes.run();
    }
      break;
    default:
      cout << "Please select a value between 1-8.\n\n";
      restart = true;
      break;
    }

    if (!restart) {
      string continueModules;
      bool errorChecking = true;
      cout << "Would you like to keep exploring modules? (Y for yes; N for no) ";
      while (errorChecking) {
        getline(cin, continueModules);
        if (continueModules == "Y") {
          break;
        } else if (continueModules == "N") {
          keepGoing = false;
          break;
        } else {
          cout << "Please enter [Y]es or [N]o: ";
        }
      }
    }
  }
  return 0;
}
