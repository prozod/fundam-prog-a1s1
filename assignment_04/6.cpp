#include <iostream>

int main() {
  int n, k, a, b;

  std::cout << "Introduceti n, k, a si b: ";
  std::cin >> n >> k >> a >> b;

  int greutateIdealaInceput = 0;
  int greutateIdealaTratament = 0;

  for (int i = 0; i < n; ++i) {
    int greutate;
    std::cout << "Introduceti greutatea persoanei " << i + 1 << ": ";
    std::cin >> greutate;

    if (greutate >= a && greutate <= b) {
      greutateIdealaInceput++;
    }

    for (int i = 0; i < k; ++i) {
      if (greutate < a) {
        greutate++;
      } else if (greutate > b) {
        greutate--;
      }
    }

    if (greutate >= a && greutate <= b) {
      greutateIdealaTratament++;
    }
  }

  std::cout << "a) " << greutateIdealaInceput << " persoane" << std::endl;
  std::cout << "b) " << greutateIdealaTratament << " persoane" << std::endl;

  return 0;
}
