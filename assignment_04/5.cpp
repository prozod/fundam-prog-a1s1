#include <iostream>
#define MARIME 256

int main() {
  int n, s, k;
  std::cout << "Introduceti n, s si k: ";
  std::cin >> n >> s >> k;

  int num[MARIME];

  for (int i = 0; i < n; ++i) {
    num[i] = i + 1;
  }

  int ramase = n;
  int actual = s - 1;

  while (ramase > 0) {
    if (num[actual] == 0) {
      break;
    }

    ramase--;
    num[actual] = 0;

    for (int i = 0; i < k; ++i) {
      do {
        actual = (actual + 1) % n;
      } while (num[actual] == 0 && ramase > 0);
    }
  }

  std::cout << "Numerele nemarcate: " << ramase << std::endl;
}

