#include <iostream>
using namespace std;

int char_input[27]; // max character

int main() {
  int n;

  /*_______________________________________________
      we can also use predefined string function:
      string n;
      cin >> n;
  ________________________________________________*/
  cin >> n;
  char arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // precompute
  for (int i = 0; i < n; i++) {
    char_input[arr[i] - 'a']++; // size of array is compact as it start with 0

    // characterFreq[arr[i]]++; //use if there is no explicitly explained what
    // type of character is
  }

  int q;
  char c;
  /*_________________________________________________________________________________
      why we don't use string c here because we have to look at individual
  character
  __________________________________________________________________________________*/
  cin >> q;
  while (q--) {
    cin >> c;
    cout << char_input[c - 'a'] << endl;
    // cout << characterFreq[c]<< endl;
  }
  return 0;
}
