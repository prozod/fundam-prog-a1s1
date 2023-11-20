#include <iostream>

int main() {
  int a, s = 0;
  std::cout << "Introdu un numar: ";
  std::cin >> a;
  while (a != 0) {
    int u;
    u = a % 10;
    s += u;
    a /= 10;
  }
  std::cout << s << std::endl;
}
