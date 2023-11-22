#include <iostream>
#define MARIME 256

int main() {
  int da, db;
  std::cout << "Introduceti dimensiunea vectorului a: ";
  std::cin >> da;
  int a[da];
  std::cout << "Introduceti dimensiunea vectorului b: ";
  std::cin >> db;
  int b[db];

  for (int i = 0; i < da; ++i) {
    std::cout << "Introduceti in vectorul a pe pozitia " << i + 1 << ": ";
    std::cin >> a[i];
  }
  std::cout << "Introduceti " << db << " numere in vectorul b: ";
  for (int i = 0; i < db; ++i) {
    std::cout << "Introduceti in vectorul b pe pozitia " << i + 1 << ": ";
    std::cin >> b[i];
  }

  // intersectie
  int rez_intersectie[MARIME];
  int m_rez_intersectie = 0;
  for (int i = 0; i < da; ++i) {
    for (int j = 0; j < db; ++j) {
      if (a[i] == b[j]) {
        rez_intersectie[m_rez_intersectie++] = a[i];
        break;
      }
    }
  }
  std::cout << "Intersectia celor doua multimi este: ";
  for (int i = 0; i < m_rez_intersectie; ++i) {
    std::cout << rez_intersectie[i] << " ";
  }

  // reuniune
  int rez_reuniune[MARIME];
  int m_rez_reuniune = 0;

  for (int i = 0; i < da; ++i) {
    rez_reuniune[m_rez_reuniune++] = a[i];
  }

  for (int i = 0; i < db; ++i) {
    bool exista = false;

    for (int j = 0; j < m_rez_reuniune; ++j) {
      if (b[i] == rez_reuniune[j]) {
        exista = true;
        break;
      }
    }

    if (!exista) {
      rez_reuniune[m_rez_reuniune++] = b[i];
    }
  }
  std::cout << std::endl << "Reuniunea celor doua multimi este: ";
  for (int i = 0; i < m_rez_reuniune; ++i) {
    std::cout << rez_reuniune[i] << " ";
  }

  // diferenta
  int rez_diferenta[MARIME];
  int m_rez_diferenta = 0;
  for (int i = 0; i < da; ++i) {
    bool exista = false;
    for (int j = 0; j < db; ++j) {
      if (a[i] == b[j]) {
        exista = true;
        break;
      }
    }
    if (!exista) {
      rez_diferenta[m_rez_diferenta++] = a[i];
    }
  }
  std::cout << std::endl << "Diferenta celor doua multimi este: ";
  for (int i = 0; i < m_rez_diferenta; ++i) {
    std::cout << rez_diferenta[i] << " ";
  }
}
