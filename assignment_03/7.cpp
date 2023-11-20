#include <iostream>

int main() {
  int a, suma = 0;

  do {
    std::cout << "Introduceti un numar (urmat de tasta Enter): ";
    std::cin >> a;

    if (a % 2 != 0 && a % 3 == 0) {
      break;
    } else if (a % 2 == 0) {
      suma += a;
    } else {
      std::cout << "Ai introdus " << a << " care nu este divizibil cu 2."
                << std::endl;
    }
  } while (true);

  std::cout << suma;
}
