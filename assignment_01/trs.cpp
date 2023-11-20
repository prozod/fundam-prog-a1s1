#include <iostream>

int main(void) {
  std::string veh_1_tip = "Autocar";
  std::string veh_2_tip = "Masina";
  std::string veh_3_tip = "Bicicleta";
  int veh_1_cost = 60;
  int veh_2_cost = 12;
  int veh_3_cost = 5;
  int veh_1_spatiu = 30;
  int veh_2_spatiu = 5;
  int veh_3_spatiu = 1;

  int cost = 0;
  int persoane;
  std::cout << "Cate persoane sunt? " << std::endl;
  std::cin >> persoane;

  while (persoane > 0) {
    if (persoane >= veh_1_spatiu) {
      cost += veh_1_cost;
      persoane -= veh_1_spatiu;
    } else if (persoane >= veh_2_spatiu) {
      cost += veh_2_cost;
      persoane -= veh_2_spatiu;
    } else {
      cost += veh_3_cost;
      persoane -= veh_3_spatiu;
    }
  }

  std::cout << "Cost total: " << cost << " RON" << std::endl;
}
