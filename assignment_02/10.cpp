#include <iostream>

int main() {
  int a, b;
  std::cout << "Introdu doua numere: ";
  std::cin >> a >> b;
  if (a % 2 != 0 && b % 2 != 0) {
    std::cout << "Nu exista numar par" << std::endl;
  } else {
    if (a % 2 == 0 && a > b) {
      std::cout << a << std::endl;
    } else {
      std::cout << b << std::endl;
    }
  }
}
