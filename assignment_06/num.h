void numSort(int list[], int len) {
  int i, j, tmp;
  for (i = 1; i < len; i++) {
    tmp = list[i];
    for (j = i - 1; j >= 0 && list[j] > tmp; j--) {
      list[j + 1] = list[j];
    }
    list[j + 1] = tmp;
  }
}
