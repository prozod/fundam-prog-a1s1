#include <stdio.h>

void sorter(int *list, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (list[i] % 2 == 0 && list[j] % 2 == 0 && list[i] > list[j] ||
          list[i] % 2 != 0 && list[j] % 2 != 0 && list[i] < list[j]) {
        int aux = list[i];
        list[i] = list[j];
        list[j] = aux;
      }
    }
  }
}

int main() {
  int list1[] = {2, 5, 3, 1, 8, 5, 4};
  int list2[] = {4, 3, 8, 6, 1, 7, 9};
  int len = sizeof(list1) / sizeof(list1[0]);

  printf("Lista 1: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", list1[i]);
  }
  sorter(list1, len);
  printf("--> ");
  for (int i = 0; i < len; i++) {
    printf("%d ", list1[i]);
  }
  printf("\n");

  printf("Lista 2: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", list2[i]);
  }
  sorter(list2, len);
  printf("--> ");
  for (int i = 0; i < len; i++) {
    printf("%d ", list2[i]);
  }
  printf("\n");
};
