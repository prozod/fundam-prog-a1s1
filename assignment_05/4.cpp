#include <iostream>
void min_aparitii(float *min, int *aparitii, int n, float a[100]) {
  *min = a[0];
  *aparitii = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] < *min) {
      *min = a[i];
      *aparitii = 1;
    } else if (a[i] == *min) {
      (*aparitii)++;
    }
  }
}

int main() {
  float a[100];
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  float min;
  int aparitii;
  min_aparitii(&min, &aparitii, n, a);
  std::cout << min << " " << aparitii << std::endl;
  return 0;
}
