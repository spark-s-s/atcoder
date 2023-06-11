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
  int n, l, k, ans; cin >> n >> l >> k;
  vi a(n);
  REP(i, n) cin >> a[i];
  
  int left = 0, right = l, count, edge;
  while (right - left > 1) {
    int mid = (left + right) / 2;
    count = 0;
    edge = 0;
    REP(i, n) {
      if (a[i] - pre >= mid && l - a[i] >= mid) {
        count++;
        pre = a[i];
      }
    }
    if (count >= k) left = mid;
    else right = mid;
  }
  cout << left << endl;
}