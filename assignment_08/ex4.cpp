#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int A[4][5] = {
      {1, 3, 4, 3, 7}, {2, 8, 3, 4, 5}, {3, 4, 1, 5, 3}, {0, 5, 7, 2, 1}};
  int S = 35;
  vector<int> sum;
  map<pair<int, int>, pair<int, int>> total;
  int mijloc;

  for (auto i = 0; i < 4; i++) {
    for (auto j = 0; j < 5; j++) {
      int suma = 0;
      for (auto a = i; a < i + 3; a++) {
        for (auto b = j; b < j + 3; b++) {
          suma += A[a][b];
        }
      }
      if (suma == S) {
        mijloc = A[i + 1][j + 1];
        total[make_pair(i, j)] = make_pair(suma, mijloc);
        suma = 0;
        mijloc = 0;
      }
    }
  }

  for (auto i = 0; i < 4; i++) {
    for (auto j = 0; j < 5; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  for (auto i = total.begin(); i != total.end(); i++) {
    cout << "[" << i->first.first << "," << i->first.second
         << "]: " << i->second.first << " (Mijloc: " << i->second.second << ")"
         << endl;
  }

  return 0;
}
