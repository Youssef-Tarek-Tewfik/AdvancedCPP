/**
  Create a class with just a static member, and illustrate that it exists, even
  without any objects.
*/
class Exists {
 public:
  static int value;
};
int Exists::value;

#include <iostream>

// write the class here

int main() {
  // do not create an object here, but assign a value to static member here
  Exists::value = 42;
  std::cout << " The value of the static member is ";
  // print its value here
  std::cout << Exists::value;
  std::cout << '\n';
}
