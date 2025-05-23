/**
  Write a program that declares, implements, and uses a class with two attributes,
  a boolean called 'flag' and an integer called 'number', which can only be changed
  or read through a constructor. The class should also have a method 'get' with no
  parameters, which returns the integer 'number' only if 'flag' is true, and
  otherwise 0.
*/
// write the class here
class Getter {
 private:
  bool flag;
  int number;
 public:
  Getter(bool f, int n) : flag(f), number(n) {}
  int get() {
    return flag ? number : 0;
  }
};

int main() {
  int returnValue;
  // create a class object here
  Getter getter(false, 42);
  // and use its get method
  returnValue = getter.get();
  return returnValue;
}
