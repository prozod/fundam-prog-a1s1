#include <stdio.h>
#include <stdlib.h>

struct SetElement {
  char character;
  int count;
};

int compareChars(const void *a, const void *b) {
  return *(char *)a - *(char *)b;
}

int findElement(struct SetElement set[], int size, char element, int *index) {
  for (int i = 0; i < size; ++i) {
    if (set[i].character == element) {
      *index = i;
      return 1;
    }
  }
  return 0;
}

void addOrUpdateElement(struct SetElement set[], int *size, char element) {
  int index;
  if (findElement(set, *size, element, &index)) {
    set[index].count++;
  } else {
    set[*size].character = element;
    set[*size].count = 1;
    (*size)++;
  }
}

int main() {
  int n;
  printf("Introduceti numarul de elemente: ");
  scanf("%d", &n);

  char *vector = (char *)malloc(n * sizeof(char));
  struct SetElement *mySet =
      (struct SetElement *)malloc(n * sizeof(struct SetElement));
  int setSize = 0;

  printf("Introduceti elementele:\n");
  for (int i = 0; i < n; ++i) {
    scanf(" %c", &vector[i]);
  }

  qsort(vector, n, sizeof(char), compareChars);

  for (int i = 0; i < n; ++i) {
    addOrUpdateElement(mySet, &setSize, vector[i]);
  }

  printf("Rezultate:\n");
  for (int i = 0; i < setSize; ++i) {
    printf("'%c' apare de %d ori\n", mySet[i].character, mySet[i].count);
  }

  free(vector);
  free(mySet);

  return 0;
}
