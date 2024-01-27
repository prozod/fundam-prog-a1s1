#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cout << "Introduceti numarul de copii: ";
  cin >> n;
  int latime_m = 0;
  int copii[n][n];
  map<int, int> prieteni;

  std::srand(std::time(0));
  int identitate_copii = 0;

  // populam matricea
  for (int i = 0; i < n; i++) {
    prieteni[i] = 0;
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == 0) {
        copii[0][j] = j;
        copii[i][0] = i;
      } else {
        int rand = std::rand() % 2;
        copii[i][j] = rand;
        copii[j][i] = rand;
        copii[i][i] = 0;
      }
    }
  }

  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      if (copii[i][j] == 1 && copii[j][i] == 1) {
        prieteni[i]++;
      }
    }
  }
  // printam lista de copii si numarul de prieteni
  for (auto pr = prieteni.begin(); pr != prieteni.end(); ++pr) {
    string singular_plural =
        (pr->second > 1 || pr->second == 0) ? " prieteni." : " prieten.";
    cout << "Copilul " << pr->first + 1 << " are " << pr->second
         << singular_plural << '\n';
  }

  // formateaza (linii si col)
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int latime = std::to_string(copii[i][j]).length();
      if (latime > latime_m) {
        latime_m = latime;
      }
    }
  }

  // printeaza
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << setw(latime_m) << setfill(' ') << copii[i][j] << " ";
    }
    cout << endl;
  }
}
