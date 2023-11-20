#include <iostream>

int main() {
  int a, b = 0, c;
  std::cout << "Introdu un numar: ";
  std::cin >> a;
  while (a != 0) {
    c = a % 10;
    b = b * 10 + c;
    a /= 10;
  }
  std::cout << b << std::endl;
}
