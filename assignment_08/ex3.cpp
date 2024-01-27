#include <fstream>
#include <iostream>

void citire(std::string nume) {
  std::ifstream fisier;
  fisier.open(nume);
  if (fisier.is_open()) {
    std::cout << fisier.rdbuf();
  }
  fisier.close();
}

void scriere(std::string nume, int continut[][3]) {
  std::ofstream fisier;
  fisier.open(nume);
  if (fisier.is_open()) {
    for (auto i = 0; i < 3; i++) {
      for (auto j = 0; j < 3; j++) {
        fisier << continut[i][j] << " ";
      }
      fisier << "\n";
    }
  }
  fisier.close();
}

int main() {
  int matrice[3][3] = {{9, 5, 6}, {2, 1, 5}, {7, 2, 9}};
  scriere("ex3.txt", matrice);
  citire("ex3.txt");
  return 0;
}
