#include <iostream>
#define V_SIZE 3

template <typename T, std::size_t N>
std::istream &operator>>(std::istream &is, T (&arr)[N]) {
  std::copy_n(std::istream_iterator<T>(is), N, arr);
  return is;
}

int main(void) {
  int a[V_SIZE], i, j, k;
  std::cout << "Introdu trei cifre cu un spatiu intre ele: ";
  std::cin >> a;

  for (i = 0; i < V_SIZE; i++) {
    for (j = 0; j < V_SIZE; j++) {
      for (k = 0; k < V_SIZE; k++) {
        if (i != j && j != k && i != k) {
          std::cout << a[i] << a[j] << a[k] << std::endl;
        }
      }
    }
  }

  return 0;
}
