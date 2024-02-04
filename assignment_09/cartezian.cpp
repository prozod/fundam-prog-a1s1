#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> cartezian(const vector<int> &multime, int n) {
  vector<vector<int>> rezultat;

  if (n == 0) {
    rezultat.push_back({});
    return rezultat;
  }

  vector<vector<int>> produs_cartezian_anterior = cartezian(multime, n - 1);

  for (int m : multime) {
    for (const auto &multime_produs : produs_cartezian_anterior) {
      vector<int> multime_noua = multime_produs;
      multime_noua.push_back(m);
      rezultat.push_back(multime_noua);
    }
  }

  return rezultat;
}

int main() {
  vector<int> M = {1, 2, 3, 4, 5};
  int n = 3;

  vector<vector<int>> produs_cartezian_rezultat = cartezian(M, n);

  for (const auto &multime_rezultata : produs_cartezian_rezultat) {
    for (int numar : multime_rezultata) {
      cout << numar << " ";
    }
    cout << endl;
  }

  return 0;
}
