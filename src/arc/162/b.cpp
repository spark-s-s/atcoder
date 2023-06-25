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

int merge_cnt(vi a) {
  int n = a.size();

  if (n <= 1) {
    return 0;
  }

  int cnt = 0;

  vi b(a.begin(), a.begin() + n / 2);
  vi c(a.begin() + n / 2, a.end());

  cnt += merge_cnt(b);
  cnt += merge_cnt(c);

  int ai = 0, bi = 0, ci = 0;

  while (ai < n) {
    if (bi < (int)b.size() && (ci == (int)c.size() || b[bi] <= c[ci])) {
      a[ai++] = b[bi++];
    } else {
      cnt += n / 2 - bi;
      a[ai++] = c[ci++];
    }
  }
  return cnt;
}

int main() {
  int n;
  cin >> n;
  vi p(n);
  REP(i, n) cin >> p[i];
  vi q(n);
  REP(i, n) q[i] = p[i];
  vi im(0), jm(0);
  if (merge_cnt(q) % 2 == 0) {
    cout << "Yes" << endl;
    REP(j, n-2) {
      REP(i, n) {
        if (p[i] == j+1) {
          if (i == n-1) {
            im.PB(n-1);
            jm.PB(n-3);
            int tmp0 = p[n-3];
            p[n-3] = p[n-2];
            p[n-2] = p[n-1];
            p[n-1] = tmp0;
            im.PB(n-1);
            jm.PB(j);
            int tmp1 = p[n-2];
            int tmp2 = p[n-1];
            RFOR(k, n-1, j+2) p[k] = p[k-2];
            p[j] = tmp1;
            p[j+1] = tmp2;
          } else if (i != j) {
            im.PB(i+1);
            jm.PB(j);
            int tmp1 = p[i];
            int tmp2 = p[i+1];
            RFOR(k, i+1, j+2) p[k] = p[k-2];
            p[j] = tmp1;
            p[j+1] = tmp2;
          }
        }
      }
    }
    cout << im.size() << endl;
    REP(i, im.size()) cout << im[i] << " " << jm[i] << endl;
  } else {
    cout << "No" << endl;
  }
}