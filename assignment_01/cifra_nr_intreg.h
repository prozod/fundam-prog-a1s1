#include <iostream>

void cifra_nr_intreg() {
  long x;
  std::cout << "Introdu un numar intreg: ";
  std::cin >> x;
  std::cout << "Ultima cifra: " << x % 10 << std::endl;
}
