#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  string input;
  regex integer("(\\+|-)?[[:digit:]]+");

  while(true) {
    cout << "Give me an integer!" << endl;
    cin >> input;
    if (!cin) break;
    if (input == "q") break;
    if (regex_match(input, integer))
      cout << "integer" << endl;
    else
      cout << "invalid input" << endl;
  }
  return 0;
}
