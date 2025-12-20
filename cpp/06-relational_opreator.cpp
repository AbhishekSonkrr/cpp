#include <iostream>
using namespace std;
int main() {
  int a = 2, b = 4;

  cout << "Equal: " << (a == b) << endl;                 // output: 0
  cout << "Not Equal: " << (a != b) << endl;             // output: 1
  cout << "Less Than or Equal: " << (a <= b) << endl;    // output: 1
  cout << "Greater Than or Equal: " << (a >= b) << endl; // output: 0
  cout << "Greater Than: " << (a > b) << endl;           // output: 0
  cout << "Less Than: " << (a < b) << endl;              // output: 1

  return 0;
}