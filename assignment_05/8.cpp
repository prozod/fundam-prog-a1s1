#include <iostream>

int *dec_to_bin(int number, int &size) {
  if (number == 0) {
    int *result = new int[1];
    result[0] = 0;
    size = 1;
    return result;
  }

  int *binary_result = nullptr;
  size = 0;

  while (number > 0) {
    int rest = number % 2;
    int *temp = new int[size + 1];
    for (int i = 0; i < size; ++i) {
      temp[i + 1] = binary_result[i];
    }
    temp[0] = rest;

    delete[] binary_result;
    binary_result = temp;
    ++size;

    number /= 2;
  }

  for (int i = 0; i < size / 2; ++i) {
    int temp = binary_result[i];
    binary_result[i] = binary_result[size - i - 1];
    binary_result[size - i - 1] = temp;
  }

  return binary_result;
}

int main() {
  int decimal_number = 19;
  int size;
  int *binary_representation = dec_to_bin(decimal_number, size);

  std::cout << "Numarul " << decimal_number << " in baza 2 este: ";
  for (int i = size - 1; i >= 0; --i) {
    std::cout << binary_representation[i];
  }
  std::cout << std::endl;

  delete[] binary_representation; // Don't forget to free the allocated memory

  return 0;
}
