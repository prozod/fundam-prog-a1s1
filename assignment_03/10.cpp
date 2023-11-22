#include <iostream>

int main() {
  int n, p, T, c = 0;
  float d;
  std::cout << "Introduceti n, p, T (numere intregi): ";
  std::cin >> n >> p >> T;

  while (T != 0) {
    if (c != n) {
      d += p;
    } else {
      d += (float)p / 2;
      p /= 2;
      c = 0;
    }
    c++;
    T--;
  }
  std::cout << "Distanta pe care se deplaseaza broscuta este: " << d << " cm."
            << std::endl;
}
