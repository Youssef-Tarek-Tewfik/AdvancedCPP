#include <iostream>

int main() {
  int myArray[7][7];

  // use foreach loops to initialize myArray, so that each
  // element's value is one higher than the previous:
  int value = 0;
  for (auto &row : myArray) {
    for (auto &col : row) {
      col = value++;
    }
  }

  // print myArray using foreach loops, one row per line,
  // zero-pad the elements if they are smaller than 10:
  for (const auto &row : myArray) {
    for (const auto &col : row) {
      std::cout << (col < 10 ? "0" : "") << col << " ";
    }
    std::cout << '\n';
  }
}
