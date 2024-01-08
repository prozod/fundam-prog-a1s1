#include <iostream>

int numara_aparitii(char c, char text[200]) {
  int i = 0;
  int nr = 0;
  while (text[i] != '\0') {
    if (text[i] == c) {
      nr++;
    }
    i++;
  }
  return nr;
}

int main() {
  char text[200];
  std::cin.getline(text, 200);
  char c;
  std::cin >> c;
  std::cout << numara_aparitii(c, text) << std::endl;
  return 0;
}
