void circular_stanga(int k, int sir[100]) {
  int aux;
  for (int i = 0; i < k; i++) {
    aux = sir[0];
    for (int j = 0; j < 4; j++) {
      sir[j] = sir[j + 1];
    }
    sir[4] = aux;
  }
}
