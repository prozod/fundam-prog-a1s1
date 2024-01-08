#include <stdio.h>
#include <stdlib.h>

struct SetElement {
  int points;
  int count;
};

int compareChars(const void *a, const void *b) {
  return *(char *)a - *(char *)b;
}

int findElement(struct SetElement set[], int size, char element, int *index) {
  for (int i = 0; i < size; ++i) {
    if (set[i].points == element) {
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
    set[*size].points = element;
    set[*size].count = 1;
    (*size)++;
  }
}

void bubbleSort(int list[], int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 1; j < len; j++) {
      if (list[j - 1] < list[j]) {
        int aux = list[j - 1];
        list[j - 1] = list[j];
        list[j] = aux;
      }
    }
  }
}

int main() {
  int n;
  printf("Introduceti numarul de elemente: ");
  scanf("%d", &n);
  int *points = (int *)malloc(n * sizeof(int));
  printf("Introduceti punctajele:\n");
  for (int i = 0; i < n; ++i) {
    scanf("%d", &points[i]);
  }
  struct SetElement *mySet =
      (struct SetElement *)malloc(n * sizeof(struct SetElement));
  int setSize = 0;

  bubbleSort(points, n);
  for (int i = 0; i < n; ++i) {
    addOrUpdateElement(mySet, &setSize, points[i]);
  }

  for (int i = 0; i <= 2; ++i) {
    printf("Premiul %d - %d cu %dp\n", i + 1, mySet[i].count, mySet[i].points);
  }
}
