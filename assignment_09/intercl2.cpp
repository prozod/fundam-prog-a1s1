#include <iostream>

using namespace std;

int main() {
  int arr1[4] = {1, 3, 4, 5};
  int arr2[4] = {2, 4, 6, 8};
  int arr3[8];
  int n = sizeof(arr1) / sizeof(arr1[0]), m = sizeof(arr2) / sizeof(arr2[0]);
  int i = 0, j = 0, p = 0;

  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      arr3[p++] = arr1[i++];
    } else {
      arr3[p++] = arr2[j++];
    }
  }

  while (i < n) {
    arr3[p++] = arr1[i++];
  }
  while (j < m) {
    arr3[p++] = arr2[j++];
  }

  for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
    cout << arr3[i] << " ";
  }
}
