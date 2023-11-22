#include <iostream>

int main() {
  int sir[10];
  for (int i = 0; i < 10; ++i) {
    std::cout << "Introduceti in vector pe pozitia " << i + 1 << ": ";
    std::cin >> sir[i];
  }

  for (int i = 0; i < 10; ++i) {
    if (sir[i] % 2 == 0) {
      std::cout << sir[i] << " ";
    }
  }
  std::cout << std::endl;
  for (int i = 0; i < 10; ++i) {
    if (sir[i] % 2 != 0) {
      std::cout << sir[i] << " ";
    }
  }
}
