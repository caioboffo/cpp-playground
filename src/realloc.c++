#include <iostream>
#include <cstdlib>
int sz = 1000;
int *buffer = 0;
static int methodName (void) {
  if (sz == 100000)
    sz = 100;
  sz = sz * 10;
  if ((buffer = (int*)realloc (buffer, sz)) == 0) {
    std::cout << "Realloc error" << std::endl;
    return 1;
        
  }
  return 0;
  
}
int main(void) {
  int i;
  if ((buffer = (int*)malloc (sz)) == 0) {
    std::cout << "Alloc error" << std::endl;
    return 1;
        
  }
  for (i = 0; i < 10000000; i++)
    if (methodName() != 0)
      return 1;
  std::cout << "All okay" << std::endl;
  return 0;
  
}
