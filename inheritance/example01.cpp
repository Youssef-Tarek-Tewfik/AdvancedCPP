#include <iostream>

class Element {  // class representing graphic element
 public:
  Element(double x, double y) : x(x), y(y) {}
 protected:
  double x, y;  // position of graphic element
};

class Rectangle : public Element {  // class representing a rectangle
 public:
  Rectangle(double x, double y, double a, double b) : Element(x, y), a(a), b(b) {}
 private:
  double a, b;  // width and height of rectangle
};

class Square : public Rectangle {  // class representing a square
 public:
  Square(double x, double y, double a) : Rectangle(x, y, a, a) {}
  void print() {
    std::cout << x << ',' << y << '\n';
  }
};

int main() {
  Square s(5, 7, 12);  // s is a square at position (5,7) with width 12
  s.print();  // change the code above so this method prints out s' location: "5,7"
}

