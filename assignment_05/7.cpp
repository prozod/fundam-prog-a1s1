#include <iostream>

// functie calcul reuniune
int *reuniune(int a[100], int b[100], int n, int m) {
  int *c = new int[n + m];
  int k = 0;
  for (int i = 0; i < n; i++) {
    c[k++] = a[i];
  }
  for (int i = 0; i < m; i++) {
    c[k++] = b[i];
  }
  return c;
}
// functie calcul intersectie
int *intersectie(int a[100], int b[100], int n, int m) {
  int *c = new int[n + m];
  int k = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        c[k++] = a[i];
      }
    }
  }
  return c;
}

// functie calcul diferenta
int *diferenta(int a[100], int b[100], int n, int m) {
  int *c = new int[n + m];
  int k = 0;
  for (int i = 0; i < n; i++) {
    int ok = 1;
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        ok = 0;
      }
    }
    if (ok) {
      c[k++] = a[i];
    }
  }
  return c;
}

int main() {
  int a[100], b[100];
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    std::cin >> b[i];
  }
  int *c = reuniune(a, b, n, m);
  int *d = intersectie(a, b, n, m);
  int *e = diferenta(a, b, n, m);
  for (int i = 0; i < n + m; i++) {
    std::cout << c[i] << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < n + m; i++) {
    std::cout << d[i] << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < n + m; i++) {
    std::cout << e[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
