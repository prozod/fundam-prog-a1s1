#include <cmath>
#include <iostream>

int main() {
  int a, prim = true;
  std::cout << "Introdu un numar: ";
  std::cin >> a;

  for (int i = 2; i <= sqrt(a); ++i) {
    if (a % i == 0) {
      prim = false;
    }
  }

  if (prim) {
    std::cout << "Numarul " << a << " este prim" << std::endl;
  } else {
    std::cout << "Numarul " << a << " nu este prim" << std::endl;
  }
}
