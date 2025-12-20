#include <iostream>
using namespace std;
int main() {
  // print all the values b/w 1 and 50 except for the mulitples of 3
  int n = 0;

  cout << "values are:" << endl;

  while (n <= 50) {

    n++;

    if (n % 3 == 0) {

      continue; // skip the  insruction nearest after this line OR break that
                // nearest loop
    }

    cout << n << endl;
  }

  return 0;
}