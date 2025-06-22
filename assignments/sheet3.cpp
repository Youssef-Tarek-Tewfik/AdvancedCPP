#include <string>
#include <iostream>

struct Book {
    std::string *title;
    double price;
    Book(std::string *title, double price) : title(title), price(price) {}
};

auto clone(Book *source) {
    return Book(source->title, 10.0);
}

int main() {
    auto s = new std::string[3]{ "a", "b", "c" };
    std::string *first = s, *second = s + 1, *third = s + 2;
    Book *a[]{ new Book(s, 99.0), new Book(s + 1, 98.0), new Book(s + 2, 97.0) };
    Book b[]{ clone(a[0]), clone(a[1]), clone(a[2]) };
    for (auto &i : b) {
        std::cout << *(i.title) << ' ' << i.price << '\n';
    }
    for (auto &i : b) {
        i.title = NULL;
    }
    for (auto &i : a) {
        delete i;
        i = NULL;
    }
    delete[] s;
    s = NULL;
    return 0;
}