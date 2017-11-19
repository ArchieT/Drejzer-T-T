#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> suma;
  string liczba;
  suma.resize(101);
  int k = 0;
  do {
    cin >> liczba;
    suma[k] = liczba;
    k++;
  } while (liczba == "0");
  for (; k < 101; k++)
    suma[k] = "0";
  liczba = "0";
  liczba.resize(103, '0');
  for (unsigned int i = 0; i < suma.size(); i++) {
    int j = 0;
    for (unsigned int ii = 0; ii < suma[i].length(); ii++) {
      int ha = 0;
      switch (suma[i].at(suma[i].length() - 1 - ii)) {
      case '0':
        // liczba[j] += 0;
        goto jezelizero;
      case '1':
        liczba[j] += 1;
        goto jezelicyfra;
      case '2':
        // liczba[j]++;
        liczba[j] += 2;
        goto jezelicyfra;
      case '3':
        // liczba[j]++;
        liczba[j] += 3;
        goto jezelicyfra;
      case '4':
        liczba[j] += 4;
        goto jezelicyfra;
      case '5':
        liczba[j] += 5;
        goto jezelicyfra;
      case '6':
        liczba[j] += 6;
        goto jezelicyfra;
      case '7':
        liczba[j] += 7;
        goto jezelicyfra;
      case '8':
        liczba[j] += 8;
        goto jezelicyfra;
      case '9':
        liczba[j] += 9;
      jezelicyfra:
        while (liczba[ha] - '0' > 9) {
          liczba[ha] -= 10;
          liczba[ha + 1] += 1;
          ha++;
        }
      jezelizero:
        j++;
        // default:
        // break;
      }
    }
  }
  bool jusz = 0;
  for (unsigned int i = 0; i < liczba.length(); i++) {
    if (liczba[liczba.length() - 1 - i] == '0' && !jusz)
      continue;
    jusz = true;
    cout << (int)(liczba[liczba.length() - 1 - i] - '0');
  }
  cout << endl << liczba << endl << (int)'#' << endl;
  return 0;
}
