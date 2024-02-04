#include <iostream>

int main() {
  int a[5] = {0, 2, 3, 4, 4};
  int b[5] = {1, 2, 3, 8, 9};
  int c[10];

  int i = 0, j = 0, k = 0;
  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);

  while (i < n && j < m) {
    if (a[i] < b[j]) {
      c[k++] = a[i++];
    } else {
      c[k++] = b[j++];
    }
  }

  while (i < n) {
    c[k++] = a[i++];
  }
  while (j < m) {
    c[k++] = b[j++];
  }

  for (auto &&n : c) {
    std::cout << n << "";
  }
}
