// helloworld.cpp

#include <iostream>

namespace mycode {

void foo() {
  std::cout << "foo() in the mycode namespace" << std::endl;
}

}

/* main() in C++ takes argc (the number of arguments) and
   argv (an array of arguments) */

using namespace mycode;

int main(int argc, char *argv[]) {

  std::cout << "Hello, World!" << std::endl;
  foo();
  return 0;
}
