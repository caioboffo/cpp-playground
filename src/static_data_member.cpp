#include <iostream>

class Demo {


  
  
public:
  static int my_number;
  void change_my_number();
};

int Demo::my_number = 0;

void Demo::change_my_number() {
  my_number++;
}


int main () {

  Demo::change_my_number();
  Demo::change_my_number();
  Demo::change_my_number();
  Demo::change_my_number();
  
  std::cout << Demo::my_number << "\n";

  return 0;

}
