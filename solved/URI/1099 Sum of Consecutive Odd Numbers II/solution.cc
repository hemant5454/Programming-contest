#include <bits/stdc++.h>
#define D(x) cout << #x " = " << (x) << endl
#define endl '\n'

using namespace std;

void solve() {
  int x, y;
  long long ans = 0;
  cin >> x >> y;
  if (x > y) swap(x, y);
  while ((++x) < y) {
    if (x & 1)
      ans += x;
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int tc;
  cin >> tc;
  while (tc--)
    solve();
  return 0;
}
