void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void selectionSort(int list[], int len) {
  int i, j, min, tmp;
  for (i = 0; i < len - 1; i++) {
    min = i;
    for (j = i + 1; j < len; j++) {
      if (list[j] < list[min]) {
        min = j;
      }
    }
    if (min != i) {
      swap(&list[i], &list[min]);
    }
  }
}
