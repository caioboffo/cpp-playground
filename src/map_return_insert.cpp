#include <iostream>
#include <map>
#include <cstring>

using namespace std;


int main() {
  map<string, char> namemap;

  cout << namemap.insert(pair<string, char>("yougendra", 'a')).second << endl;
  cout << namemap.insert(pair<string, char>("yougendra", 'b')).second << endl;
  
  return 0;
}
