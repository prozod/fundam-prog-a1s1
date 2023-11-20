#include <iostream>
#include <string>

int main() {
  int div = 6;
  for (int i = 1; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      std::string res = std::to_string(i) + "23" + std::to_string(j);
      if (std::stoi(res) % div == 0) {
        std::cout << std::stoi(res) << " e divizibil cu " << div << std::endl;
      }
    }
  }
}
