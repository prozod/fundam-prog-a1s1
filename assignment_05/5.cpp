void simplificare(int *a, int *b) {
  int i = 2;
  while (i <= *a && i <= *b) {
    if (*a % i == 0 && *b % i == 0) {
      *a /= i;
      *b /= i;
    } else {
      i++;
    }
  }
}
