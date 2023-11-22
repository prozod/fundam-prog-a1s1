#include <iostream>

int main() {
  int num;
  std::cout << "Introdu un numar: ";
  std::cin >> num;

  std::cout << num << " = ";
  for (int i = 2; i <= num; ++i) {
    int count = 0;

    while (num % i == 0) {
      num /= i;
      ++count;
    }

    if (count > 0) {
      std::cout << i;
      if (count >= 1) {
        std::cout << "^" << count;
      }
    }
  }

  std::cout << std::endl;
}
