#include <stdio.h>

void ScrieVectorFloat(float *x, int init, int final, const char *numeFisier) {
  FILE *fp;

  fp = fopen(numeFisier, "w");

  if (init < 0 || final < init) {
    fprintf(stderr, "Eroare: Pozitii invalide in vector\n");
    fclose(fp);
    return;
  }

  for (int i = init; i <= final; ++i) {
    fprintf(fp, "%f\n", x[i]);
  }

  fclose(fp);
}

int main() {
  float vector[] = {1.2, 3.4, 5.6, 7.8, 9.0, 8.1};
  int lungimeVector = sizeof(vector) / sizeof(vector[0]);

  ScrieVectorFloat(vector, 2, 4, "output.txt");

  return 0;
}
