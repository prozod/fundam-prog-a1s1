#include <iostream>

int main() {
  int a, b;
  std::cout << "Introdu doua cifre cu un spatiu intre ele: ";
  std::cin >> a >> b;
  if (a != 0 && b != 0) {
    if (a % b != 0) {
      std::cout << a << " NU se imparte exact la " << b << std::endl;
    } else {
      std::cout << a << " se imparte exact la " << b << std::endl;
    }
  }
}
