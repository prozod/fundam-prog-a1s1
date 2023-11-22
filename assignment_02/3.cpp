#include <iostream>

int main() {
  int g1, g2;
  int sum = 0;
  std::cout << "Introdu greutatea copilului 1 si 2: ";
  std::cin >> g1 >> g2;
  sum = g1 + g2;
  if (g1 > 100) {
    std::cout << "Copilul 1 nu poate intra" << std::endl;
  }
  if (g2 > 100) {
    std::cout << "Copilul 2 nu poate intra" << std::endl;
  }
  if (sum <= 100 && g1 <= 100 && g2 <= 100) {
    std::cout << "Copiii pot intra impreuna" << std::endl;
  }
  if (sum > 100 && g1 <= 100 && g2 <= 100) {
    std::cout << "Copiii trebuie sa intre pe rand" << std::endl;
  }
}

// #include <iostream>
//
// using namespace std;
//
// int main()
//
// {
//
//   int copil1, copil2;
//
//   cout << "Masa primului copil: ";
//   cin >> copil1;
//
//   cout << "Masa celui de al doilea copil: ";
//   cin >> copil2;
//
//   if (copil1 + copil2 <= 100) {
//     cout << "Ambii copii pot intra" << endl;
//   } else {
//     cout << "Copii trebuie sa intre pe rand" << endl;
//   }
//
//   return 0;
// }
