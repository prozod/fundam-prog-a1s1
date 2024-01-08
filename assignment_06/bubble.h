void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubbleSort(int list[], int len) {
  int swapped, tmp;
  for (int i = 0; i < len - 1; i++) {
    swapped = 0;
    for (int j = 0; j < len - i - 1; j++) {
      if (list[j] > list[j + 1]) {
        swap(&list[j], &list[j + 1]);
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}
