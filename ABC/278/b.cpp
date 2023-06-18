#include <bits/stdc++.h>
#include  <atcoder/all>
using namespace std;
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
  int h, m; cin >> h >> m;
  int a, b, c, d;
  while (true) {
    a = h/10; b = h%10; c = m/10; d = m%10;
    if (10 * a + c >= 0 && 10*a + c <= 23 && 10*b + d >= 0 && 10*b + d <= 59) {
      break;
    }
    m++;
    if (m == 60) {
      m = 0;
      h++;
    }
    if (h == 24) h = 0;
  }
  cout << a << b << " " << c << d << endl;
  return 0;
}
