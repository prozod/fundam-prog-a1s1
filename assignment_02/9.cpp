#include <iostream>

int main() {
  int a, b, c;
  std::cout << "Introdu notele lui Andrei cu spatiu intre ele: ";
  std::cin >> a >> b >> c;
  if (c >= 8) {
    std::cout << a << " " << b << " " << c << std::endl;
  } else {
    if (a > b) {
      std::cout << a << std::endl;
    } else {
      std::cout << b << std::endl;
    }
  }
}
