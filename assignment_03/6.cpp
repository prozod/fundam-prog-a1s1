#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
  int a, b, c;
  std::cout << "Introduceti 3 numere: ";
  std::cin >> a >> b >> c;
  std::vector<int> num;

  for (int i = 1; i < c; i++) {
    if ((i < c && i % a == 0)) {
      num.push_back(i);
    }
    if ((i < c && i % b == 0)) {
      num.push_back(i);
    }
  }

  std::sort(num.begin(), num.end());
  std::set<int> n_unice(num.begin(), num.end());

  for (int num : n_unice) {
    std::cout << num << " ";
  }
}
