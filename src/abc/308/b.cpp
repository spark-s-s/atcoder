#include <bits/stdc++.h>
// #include <atcoder/all>
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
  int n, m;
  cin >> n >> m;

  vector<str> c(n);
  REP(i, n) cin >> c[i];

  vector<str> d(m);
  REP(i, m) cin >> d[i];

  int p0;
  cin >> p0;

  vi p(m+1);
  REP(i, m) cin >> p[i];
  p[m] = p0;

  int ans = 0;

  REP(i, n) {
    int tmp = m;
    REP(j, m) {
      if(c[i]==d[j]) tmp = j;
    }
    ans += p[tmp];
  }

  cout << ans << endl;
}