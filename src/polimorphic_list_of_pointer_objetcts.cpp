#include <iostream>
#include <list>

using namespace std;

class animal {
public:
  virtual void makeSound() {cout << "rawr" << endl;}
};

class dog : public animal {
public:
  virtual void makeSound() {cout << "bark" << endl;}
};

class cat : public animal {
public:
  virtual void makeSound() {cout << "meow" << endl;}
};

int main(int argc, char *argv[])
{  
  list<animal*> *list_of_animal = new list<animal*>();
  list<dog*> *list_of_dog = new list<dog*>();
  
  list_of_animal->push_back(new dog());
  list_of_animal->push_back(new dog());
  list_of_animal->push_back(new dog());
  list_of_animal->push_back(new dog());
  list_of_animal->push_back(new dog());

  list_of_dog = dynamic_cast<list<dog*>*>(&list_of_animal);
  
  for (auto it = list_of_animal->begin(); it != list_of_animal->end(); ++it) {
    (*it)->makeSound();
  }
    
  return 0;
}

