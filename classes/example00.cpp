/**
  Write a program that declares, implements, and uses a class with no attributes.
  The class should print 'hello' to the terminal when its object is created and
  'bye' when its object is removed from memory.
*/
#include <iostream>     // terminal input and output classes and objects

// write the class here
class Manners {
 public:
  Manners() { std::cout << "hello" << '\n'; }
  ~Manners() { std::cout << "bye" << '\n'; }
};

int main() {
  // create a class object here
  Manners good;
}
