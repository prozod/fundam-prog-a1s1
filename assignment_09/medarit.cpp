#include <iostream>

using namespace std;

int main() {
  int nums[4];
  double sum = 0;

  cout << "Introduceti 4 numere intregi: ";
  for (int i = 0; i < 4; ++i) {
    cin >> nums[i];
    sum += nums[i];
  }

  bool found = false;
  for (int i = 0; i < 4; ++i) {
    if (nums[i] == (sum - nums[i]) / 3) {
      cout << nums[i] << endl;
      found = true;
    }
  }

  if (!found) {
    cout << "Nu sunt." << endl;
  }

  return 0;
}
