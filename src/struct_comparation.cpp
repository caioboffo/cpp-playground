// Copyright 2015 <caioboffo@gmail.com>
#include <iostream>

template <typename T>
struct MyStructSimple {
  T simple;
  explicit MyStructSimple(T value) : simple(value) {}
  bool equals(const MyStructSimple<T>& rhs) const {
    return (simple == rhs.simple);
  }

  friend bool operator==(const MyStructSimple<T>& l,
                         const MyStructSimple<T>& r) {
    return l.simple == r.simple;
  }

  friend  std::ostream& operator<<(std::ostream& o,
                           const MyStructSimple<T>* s) {
    return o << s->simple;
  }
};

// MyStruct
template <typename T>
struct MyStruct {
  T* a;
  T* b;
  MyStruct(T a, T b) : a(a), b(b) {}
  bool equals(const MyStruct<T>* rhs) const {
    return (a == *rhs->a && b == *rhs->b);
  }
  
  friend std::ostream& operator<<(std::ostream& o,
                           const MyStruct<T>& s) {
    return o << '{'  << s.a << ", " << s.b << '}';
  }

};


int main(int argc, char const *argv[]) {
  
  MyStruct<MyStructSimple<int>>* s =
      new MyStruct< MyStructSimple<int> >(1, 2);
  MyStruct<MyStructSimple<int>>* t =
      new MyStruct< MyStructSimple<int> >(1, 2);

  
  MyStructSimple<int> *a = new MyStructSimple<int>(2);
  MyStructSimple<int> *b = new MyStructSimple<int>(2);

  std::cout << "s: " << *s << std::endl;
  
  if (*a == *b) std::cout << "a == b" << std::endl;
  if (a->equals(*b)) std::cout << "a equals b" << std::endl;
  // if (s->equals(t))
  //   std::cout << "iguais\n";


  return 0;
}
