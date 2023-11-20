#include <iostream>
#include <vector>

int main() {
  int a, p = 2;
  std::vector<int> n_prime;
  std::cout << "Introdu un numar: ";
  std::cin >> a;

  while (n_prime.size() < a) {
    bool e_prim = true;

    for (int prim : n_prime) {
      if (p % prim == 0) {
        e_prim = false;
        break;
      }
    }

    if (e_prim) {
      n_prime.push_back(p);
    }
    ++p;
  }

  std::cout << "Primele " << a << " numere prime sunt: ";
  for (int prim : n_prime) {
    std::cout << prim << " ";
  }
  std::cout << std::endl;
}
