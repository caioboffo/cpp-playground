// Copyright 2015 <caio>
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  /* code */
  string line = "0000000009999123100000010000000000000BRABCBACNPR4105";
  // string nomeCampo(line, begin, end);
  string tipoRegistro(line, 0, 2);
  string data(line, 2, 8);

  cout << tipoRegistro << endl;
  cout << data << endl;

  return 0;
}
