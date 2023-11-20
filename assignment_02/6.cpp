#include <iostream>

int main() {
  int a, b, c;
  std::cout << "Introdu trei cifre distincte cu un spatiu intre ele: ";
  std::cin >> a >> b >> c;

  if (a <= b && a <= c) {
    if (b <= c) {
      std::cout << b << std::endl;
    } else {
      std::cout << c << std::endl;
    }
  } else if (b <= a && b <= c) {
    if (a <= c) {
      std::cout << a << std::endl;
    } else {
      std::cout << c << std::endl;
    }
  } else {
    if (a <= b) {
      std::cout << a << std::endl;
    } else {
      std::cout << b << std::endl;
    }
  }
}
