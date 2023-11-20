#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#define ARR_SIZE 3

void geometric_mean(int arr[], int arr_size) {
  int produs = 1;
  for (int i = 0; i < arr_size; ++i) {
    produs *= arr[i];
  }
  std::cout << "Media geometrica este: "
            << roundf((float)std::pow(produs, 0.5) * 100) / 100 << std::endl;
}

void arithmetic_mean(int arr[], int arr_size) {
  int media = 0;
  for (int i = 0; i < arr_size; ++i) {
    media += arr[i];
  }
  std::cout << "Media aritmetica este: "
            << roundf(((float)media / arr_size) * 100) / 100 << std::endl;
}

void medii(void) {
  int nums[ARR_SIZE];
  std::cout
      << "Introduceti 3 numere intregi pentru a calcula media aritmetica: ";

  int i = 0;
  while (i < ARR_SIZE) {
    std::cin >> nums[i];
    i++;
  }

  arithmetic_mean(nums, ARR_SIZE);
  geometric_mean(nums, ARR_SIZE);
}
