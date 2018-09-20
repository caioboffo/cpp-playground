
#include <iostream>

using namespace std;

template <class T>
class SmartPtr
{
  T *ptr; // Actual pointer
public:
  // Constructor
  explicit SmartPtr(T *p = NULL) { ptr = p; }

  // Destructor
  ~SmartPtr() { delete(ptr); }

  // Overloading derefedencing operator
  T &operator *() { return *ptr; }

  // Overloading arro operator so that members of T can be accessed
  // like a pointer  (useful if T represent a class or stuct or
  // union type)
  T *operator ->() { return ptr; }
};

int main(int argc, char *argv[])
{
  SmartPtr<int> ptr(new int());
  *ptr = 20;
  cout << *ptr;
  return 0;
}
