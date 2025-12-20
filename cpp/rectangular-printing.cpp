#include <iostream>

using namespace std;

int main() {

  int i, n, m, j;

  cout << "length:";
  cin >> n;

  cout << "breadth:";
  cin >> m;

  for (i = 1; i <= n; i++) {

    for (j = 1; j <= m; j++) {

      /*------------------ algorithm---------------------*/

      if (i == 1 || j == 1 || i == n || j == m) {

        cout << "*";
      } else {

        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}