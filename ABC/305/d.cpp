#include <bits/stdc++.h>
using namespace std;
#include  <atcoder/all>
using str = string;
using ll = long long;
using ld = long double;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define RREP(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define FOR(i, f, t) for (int i = int(f); i <= int(t); i++)
#define RFOR(i, f, t) for (int i = int(f); i >= int(t); i--)
#define ALL(vec) (vec).begin(), (vec).end()
#define SORT(vec) sort((vec).begin(), (vec).end())
#define MAX(vec) *max_element((vec).begin(), (vec).end())
#define MIN(vec) *min_element((vec).begin(), (vec).end())
#define PB(x) push_back(x);
#define YES(ans) if (ans) cout << "YES" << endl; else cout << "NO" << endl;
#define Yes(ans) if (ans) cout << "Yes" << endl; else cout << "No" << endl;
#define yes(ans) if (ans) cout << "yes" << endl; else cout << "no" << endl;
const double PI = 3.141592653589793;

int main() {
  int n; cin >> n;
  vi a(n);
  REP(i, n) cin >> a[i];
  vi data(a[n-1]);
  REP(i, (n-1)/2) FOR(j, a[2*i+1], a[2*i+2]-1) data[j]++;
  vi sum(a[n-1]);
  sum[0] = data[0];
  FOR(i, 1, a[n-1]-1) sum[i] = sum[i-1] + data[i];
  
  int q, l, r; cin >> q;
  REP(i, q) {
    cin >> l >> r;
    if (l == 0) cout << sum[r-1] << endl;
    else cout << sum[r-1] - sum[l-1] << endl;
  }
  return 0;
}