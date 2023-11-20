#include <iostream>

int main() {
  int a;
  std::cout << "Introdu locul lui Radu: ";
  std::cin >> a;
  if (a <= 25) {
    std::cout << "A" << std::endl;
  } else if (a <= 50) {
    std::cout << "B" << std::endl;
  } else if (a <= 75) {
    std::cout << "C" << std::endl;
  } else if (a <= 100) {
    std::cout << "D" << std::endl;
  } else {
    std::cout << "E" << std::endl;
  }
}
