#include <iostream>
using std::cout;

#include "Account.h"

int run() {
  Account account;
  account.Deposit(90);
  cout << "After depositing $90 your balance is " << account.GetBalance() << ".\n";
  for (auto s : account.Report()) {
    cout << s << '\n';
  }

  account.Withdraw(50);
  if (account.Withdraw(100)) {
    cout << "The second withdraw succeeded!\n";
  }

  cout << "After withdrawing $50 then $100,\n";
  for (auto s : account.Report()) {
    cout << s << '\n';
  }
}