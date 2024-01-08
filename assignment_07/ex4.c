#include <stdio.h>

int prim(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

void scrieDivizoriPrimi(int n, const char *numeFisier) {
  FILE *fp;

  fp = fopen(numeFisier, "w");
  if (fp == NULL) {
    perror("s-a produs o eroare la deschiderea fisierului de iesire");
    return;
  }

  for (int i = 2; i <= n; ++i) {
    if (prim(i)) {
      int putere = 0;
      while (n % i == 0) {
        ++putere;
        n /= i;
      }
      if (putere > 0) {
        fprintf(fp, "%d^%d\n", i, putere);
      }
    }
  }

  fclose(fp);
}

int main() {
  int numar;
  printf("Introduceti un numar: ");
  scanf("%d", &numar);
  scrieDivizoriPrimi(numar, "output.txt");

  return 0;
}
