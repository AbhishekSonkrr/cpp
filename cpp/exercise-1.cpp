// Swapping the values from user input

#include <iostream>

using namespace std;

int main() {

  int a, b;

  // to get option for input for a and b

  cout << "a:";

  cin >> a;

  cout << "b:";

  cin >> b;

  // to swap the values of a and b

  int c;

  c = a;

  a = b;

  b = c;

  cout << "a:" << a << endl;

  cout << "b:" << b << endl;

  return 0;
}