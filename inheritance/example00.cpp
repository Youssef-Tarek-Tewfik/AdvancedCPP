#include <iostream>

class Book {  // a Book object always has a title and a price.
 // change this class so that the title cannot be changed, and the price can be changed by Magazine:
 public:
  double price;
  const std::string title;
  Book(std::string name, double val) : title(name), price(val) {}
  void show() {
    std::cout << title << " - " << price << "\n";
  }
};

class Magazine : public Book {  // a Magazine object uses the Book's constructor, and can apply a discount
  // change this class so that an object is solely created through Book's constructor
 public:
  Magazine(std::string name, double val) : Book(name, val) {}
  void discount(double percent);
};

void Magazine::discount(double percent) {
  price *= (100 - percent) / 100.0;
}

// implement Magazine's discount method here

int main() {
  Magazine mag(std::string("C++ Monthly"), 10.0);
  mag.show(); mag.discount(25.0);  // this should show 10 in the console, then we apply a 25 % discount
  mag.show();  // this should now show 7.5
}

