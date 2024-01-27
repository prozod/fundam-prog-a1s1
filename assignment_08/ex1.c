#include <stdio.h>

int main() {
  int coloana, rand;
  printf("Introduceti numarul de randuri: ");
  scanf("%d", &rand);
  printf("Introduceti numarul de coloane: ");
  scanf("%d", &coloana);
  int matrice[rand][coloana];
  for (int i = 0; i < rand; i++) {
    for (int j = 0; j < coloana; j++) {
      printf("Introduceti elementul [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrice[i][j]);
    }
  }
  int i, j, sum = 0;
  for (int i = 0; i < rand; i++) {
    for (int j = 0; j < coloana; j++) {
      sum += matrice[i][j];
    }
    printf("Suma rand %d este: %d\n", i + 1, sum);
    sum = 0;
    for (int j = 0; j < coloana; j++) {
      sum += matrice[j][i];
    }
    printf("Suma coloana %d este: %d\n", i + 1, sum);
    sum = 0;
  }
}
