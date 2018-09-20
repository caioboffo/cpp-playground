#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
  std::string a_float;
  double the_float;

  a_float = "12.023";
  the_float = atof(a_float.c_str());
  std::cout << "my double/float is " << the_float << std::endl;
  return 0;
}
