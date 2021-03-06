//https://open.kattis.com/contests/uryqeu/problems/pieceofcake2
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
typedef long double Double;
typedef unsigned long long ULong;
typedef pair<Long, Long> Pair;

const int N = 1e6;
const Long INF = 1e18;
const Double EPS = 1e-9;
const Long MOD = 1e9 + 7;

void Solve(void) {
  Long n, h, v;
  cin >> n >> h >> v;
  Long x = max(h, n - h);
  Long y = max(v, n - v);
  Long ans = x * y * 4;
  cout << ans << '\n';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  //cin >> t;
  while (t--) Solve();
  return 0;
}

