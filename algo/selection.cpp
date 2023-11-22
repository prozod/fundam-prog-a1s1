#include <iostream>

int main() {
  int a[6] = {5, 2, 4, 6, 1, 3};

  for (int i = 0; i < 6 - 1; i++) { // 6 - 1 = 5, parcurgem vectorul
    int minB = i; // ne asumam ca minimul este pe pozitia i, dupa fiecare
                  // iteratie minimul va fi pe pozitia i (default), astfel incat
                  // sa luam [i+1]<[i]

    for (int j = i + 1; j < 6;
         j++) {             // parcurgem vectorul de la i + 1 pana la final
      if (a[j] < a[minB]) { // verificam daca gasim un element mai mic decat
                            // minimul (a[1] < a[0])
        minB =
            j; // daca gasim un element mai mic decat minimul, il salvam in minB
      }
    }

    if (minB != i) { // daca minB nu este i, atunci interschimbam elementele, pt
                     // ca am gasit un element mai mic decat minimul curent (5
                     // mai mic decat 2)
      int temp = a[i];
      a[i] = a[minB];
      a[minB] = temp;
    }
  }

  std::cout << "[";
  for (auto &num : a) {
    std::cout << num << " ";
  }
  std::cout << "]" << std::endl;
}
