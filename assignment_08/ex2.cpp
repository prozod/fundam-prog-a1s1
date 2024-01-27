#include <iostream>
#include <random>

int main() {
  int M_SIZE;
  std::cout << "Introduceti dimensiunea matricei: ";
  std::cin >> M_SIZE;
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0, 1);
  int matrice[M_SIZE][M_SIZE];
  int ab, bl, md, sd;

  for (int row = 0; row < M_SIZE; row++) {
    for (int col = 0; col < M_SIZE; col++) {
      matrice[row][col] = dist(rd);
      if (row < col) {
        ab += matrice[row][col];
      } else if (row > col) {
        bl += matrice[row][col];
      }
    }
    md += matrice[row][row];
    sd += matrice[row][M_SIZE - row - 1];
  }

  for (auto &i : matrice) {
    for (auto &j : i) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "Diagonala principala: " << md << std::endl;
  std::cout << "Diagonala secundara: " << sd << std::endl;
  std::cout << "Deasupra diagonalei principale: " << ab << std::endl;
  std::cout << "Sub diagonala principala: " << bl << std::endl;
  return 0;
}
