#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  int k;
  cin >> n;
  cin >> k;
  vector<int> a(n);
  vector<int> v(n);
  for(auto& i : a) {
    cin >> i;
  }
  v = a;
  sort(v.begin(), v.end());
  if(v == a) {
    cout << "YES" << endl;
    return;
  }
  if(k > 1) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}