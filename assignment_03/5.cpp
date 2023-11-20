#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int a;
  std::vector<int> divizori;
  std::cout << "Introdu un numar: ";
  std::cin >> a;

  for (int i = 1; i < sqrt(a); i++) {
    if (a % i == 0) {
      divizori.push_back(i);
      divizori.push_back(a / i);
    }
  }

  std::sort(divizori.begin(), divizori.end());
  for (auto divizor : divizori) {
    std::cout << divizor << " ";
  }
}
