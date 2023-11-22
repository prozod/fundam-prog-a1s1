#include <iostream>
#include <vector>

using namespace std;

struct DataNasterii {
  int an;
  int luna;
  int zi;
};

int main() {
  int n;
  cout << "Introduceti numarul de copii: ";
  cin >> n;

  vector<DataNasterii> dateNasteri;

  for (int i = 0; i < n; ++i) {
    DataNasterii data;
    cout << "Introduceti data de nastere pentru copilul " << i + 1
         << " (an luna zi): ";
    cin >> data.an >> data.luna >> data.zi;
    dateNasteri.push_back(data);
  }

  int copiiPe1Iunie = 0;
  int copii1994 = 0, copii1995 = 0, copii1996 = 0;

  for (const auto &data : dateNasteri) {
    if (data.luna == 6 && data.zi == 1) {
      copiiPe1Iunie++;
    }

    if (data.an == 1994) {
      copii1994++;
    } else if (data.an == 1995) {
      copii1995++;
    } else if (data.an == 1996) {
      copii1996++;
    }
  }

  cout << "Numarul de copii nascuti pe 1 iunie: " << copiiPe1Iunie << endl;
  cout << "Numarul de copii nascuti in 1994: " << copii1994 << endl;
  cout << "Numarul de copii nascuti in 1995: " << copii1995 << endl;
  cout << "Numarul de copii nascuti in 1996: " << copii1996 << endl;

  return 0;
}
