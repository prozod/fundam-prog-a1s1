#include <iostream>
#include <numbers>

void c_length(float diameter) {
  std::cout << "Lungimea cercului este de " << (std::atan(1.0) * 4) * diameter
            << " unitati" << std::endl;
}

void c_area(float radius) {
  std::cout << "Aria cercului este de "
            << (std::atan(1.0) * 4) * std::pow(radius, 2) << std::endl;
}

void c_sector_area(float radius, int sector) {
  std::cout << "Aria sectorului de " << sector << "° este: "
            << ((std::atan(1.0) * 4) * std::pow(radius, 2) * sector) / 360
            << std::endl;
}

void c_sector_length(float diameter, int sector) {
  std::cout << "Lungimea sectorului de " << sector << "° este: "
            << ((std::atan(1.0) * 4) * diameter) * (sector / 360.0)
            << std::endl;
}

void cerc(void) {
  int diameter;
  int radius;
  int sector;

  std::cout << "Introdu diametrul cercului: ";
  std::cin >> diameter;
  radius = diameter / 2;
  std::cout << "Introdu un sector (ex: 40°, 75°) al cercului: ";
  std::cin >> sector;

  c_length(diameter);
  c_area(radius);
  c_sector_area(radius, sector);
  c_sector_length(diameter, sector);
}
