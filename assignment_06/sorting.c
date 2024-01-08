#include "bubble.h"
#include <stdio.h>

int main(void) {
  int nums[] = {5, 6, 7, 0, 1, 4, 2, 9, 3, 8};
  int len = sizeof(nums) / sizeof(nums[0]);
  bubbleSort(nums, len);
  for (int i = 0; i < len; i++) {
    printf("%d ", nums[i]);
  }
}
