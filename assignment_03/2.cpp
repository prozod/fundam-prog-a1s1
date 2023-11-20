#include <iostream>

int main() {
  for (int i = 0; i <= 1000; i += 17) {
    int j = 1000 - i;
    if (j % 19) {
      std::cout << "Perechea " << i << ", " << j << std::endl;
    }
  }
}
