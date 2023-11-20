#include "cerc.h"
#include "cifra_nr_intreg.h"
#include "medii.h"
#include "suma.h"
#include <iostream>

int main(void) {
  std::cout << "------ SUMA -------" << std::endl;
  suma();
  std::cout << "------ MEDIE ARITMETICA & GEOMETRICA -------" << std::endl;
  medii();
  std::cout << "------ ULTIMA CIFRA A UNUI NUMAR INTREG -------" << std::endl;
  cifra_nr_intreg();
  std::cout
      << "------ ARIA SI LUNGIMEA UNUI CERC, RESPECTIV AL UNUI SECTOR -------"
      << std::endl;
  cerc();
}
