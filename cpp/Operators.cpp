//
#include <iostream>
using namespace std;
int main() {

  int a = 10;

  int b = a++;

  cout << b << " "; // output: b=10

  b = ++a;

  cout << a; // output: 12

  return 0;
}