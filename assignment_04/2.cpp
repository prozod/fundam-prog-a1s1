#include <iostream>

int main() {
  int n, d;
  std::cout << "Introduceti dimensiunea vectorului: ";
  std::cin >> n;
  std::cout << "Introduceti divizorul: ";
  std::cin >> d;

  int sd[n];
  for (int i = 0; i < n; ++i) {
    std::cout << "Introduceti in vector pe pozitia" << i + 1 << ": ";
    std::cin >> sd[i];
  }

  std::cout << "Numerele divizibile cu " << d << " sunt: ";
  for (int i = 0; i < n; ++i) {
    if (sd[i] % d == 0) {
      std::cout << sd[i] << " ";
    }
  }
}
