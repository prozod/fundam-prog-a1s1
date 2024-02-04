#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int radical = sqrt(n), numarDivizori = 0;

  for (int d = 1; d <= radical; d++) {
    if (n % d ==
        0) { // Am găsit divizorul d, dar considerăm și perechea acestuia
      int dprim = n / d; // d' = n / d
      if (dprim != d) {
        numarDivizori += 2;
      } else { // Dacă d' == d, atunci perechea lui d este el însuși, deci îl
               // numărăm doar o dată
        numarDivizori++;
      }
    }
  }
  if (numarDivizori == 2) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
