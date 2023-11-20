#include <iostream>

int main() {
  int a, b;
  std::cout << "Introdu doua cifre cu un spatiu intre ele: ";
  std::cin >> a >> b;
  if (a > b) {
    std::cout << a * 2 << " " << b * 3 << std::endl;
  } else {
    std::cout << a * 3 << " " << b * 2 << std::endl;
  }
}
