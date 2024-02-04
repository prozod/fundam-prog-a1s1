#include <iostream>

using namespace std;

void categorize_athletes(int *heights, int num_of_athletes, int given_height) {
  int taller[num_of_athletes];
  int shorter[num_of_athletes];
  int combined_heights[2][num_of_athletes];

  for (int i = 0; i < num_of_athletes; ++i) {
    if (heights[i] > given_height || heights[i] == given_height) {
      taller[i] = i + 1;
      shorter[i] = 0;
    } else {
      shorter[i] = i + 1;
      taller[i] = 0;
    }
  }

  for (int i = 0; i < num_of_athletes; ++i) {
    combined_heights[0][i] = shorter[i];
    combined_heights[1][i] = taller[i];
  }

  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < num_of_athletes; ++j) {
      if (combined_heights[i][j] != 0) {
        cout << combined_heights[i][j] << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int num_of_athletes;
  cout << "Introduceti numarul de sportivi: ";
  cin >> num_of_athletes;

  int given_height;
  cout << "Introduceti inaltimea dorita: ";
  cin >> given_height;

  int heights[num_of_athletes];
  cout << "Introduceti inaltimile sportivilor: ";
  for (int i = 0; i < num_of_athletes; ++i) {
    cin >> heights[i];
  }

  categorize_athletes(heights, num_of_athletes, given_height);

  return 1;
}
