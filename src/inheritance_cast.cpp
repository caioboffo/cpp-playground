#include <iostream>

// base class
class A {
  int a;
public:
  virtual void print() {}
};
// derived class 1
class B : public A {
  int b;
public:
  void print() {
    std::cout << "this is B\n";
  }
};

// derived class 2
class C : public B {
  char *c;
public:
  void print_my_name() {
    std::cout << "this is C\n";
  }
};

void print_classes(A *a_class_pointer) {
  a_class_pointer->print();
}

int main(int argc, char *argv[])
{
  B *b_class = new B();
  C *c_class = new C();

  //A *a_reference_to_a_class;
  //a_reference_to_a_class = c_class;
  print_classes(c_class);

  return 0;
}
