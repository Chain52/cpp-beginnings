#include "Transaction.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amt, string kind) : amount(amt), type(kind) {}

string Transaction::Report() {
  return "  " + type + " " + to_string(amount);
}