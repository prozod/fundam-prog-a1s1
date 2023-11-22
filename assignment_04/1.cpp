#include <iostream>

int main() {
  int n;
  std::cout << "Introduceti dimensiunea vectorului: ";
  std::cin >> n;
  int m[n];

  std::cout << "Introduceti " << n << " numere: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> m[i];
  }

  for (int i = n; i > 0; --i) {
    m[i] = m[i - 1];
  }

  m[0] = 0;

  for (int i = 0; i <= n; ++i) {
    std::cout << m[i] << " ";
  }

  return 0;
}
