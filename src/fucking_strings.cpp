
/*
 * fucking_strings.cpp
 *
 *  Created on: 26/02/2015 15:46:03
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

class with_string {

private:
  string name;
public:
  with_string(const string& name);
  string get_string(void);
  void set_string(const string& name);
};

with_string::with_string(const string& name){
  this->name = name;
}

string with_string::get_string(void){
  return this->name;
}

void with_string::set_string(const string& name) {
  this->name = name;
}


int main(int argc, char const *argv[]) {
  with_string* ws = new with_string("Caio Boffo Silva");
  cout << ws->get_string() << endl;
  ws->set_string("Elohá Cabreira Brito");
  cout << ws->get_string() << endl;
  string value = ws->get_string();
  cout << value << endl;
  // const string& recebe um const char*
  const char* p_char = "Caio e Elohá";
  ws->set_string(p_char);
  cout << ws->get_string() << endl;
  return 0;
}

