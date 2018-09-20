#include <iostream>
#include <string>


class MyException {
public:
  std::string what;
};

int main(int argc, char **argv) {
  try {
    throw MyException();
  }
  catch (MyException& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
