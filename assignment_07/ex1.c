#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char *buffer = NULL;
  size_t bufferSize = 0;

  fp = fopen("ex1.txt", "r");

  while (getline(&buffer, &bufferSize, fp) != -1) {
    printf("%s", buffer);
  }

  free(buffer);

  fclose(fp);

  return 0;
}
