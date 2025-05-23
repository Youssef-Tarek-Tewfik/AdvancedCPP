/**
  Create a class Counter below with a static member "count" that holds the number of
  objects of that class. Also, the public attribute "type" of the class should
  contain the type of the supplied parameter to the constructor, as a C string.
*/
#include <iostream>     // terminal output
#include <string>
// write the class, and then define the static member below:
class Counter {
 private:
  Counter(std::string s) : type(s) {
    ++count;
  }
 public:
  static int count;
  std::string type;
  Counter() : Counter("void") {}
  Counter(int) : Counter("int") {}
  Counter(double) : Counter("double") {}
};
int Counter::count(0);

int main() {
  Counter c1, c2(2), c3(3.4);
  // The next line should return "void,int,double,3":
  std::cout << c1.type << ',' << c2.type << ',' << c3.type << '\n';
  // Finally, print out the count of Counter objects below:
  std::cout << Counter::count << '\n';
}
