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
  char p, q; cin >> p >> q;
  int n_p, n_q;
  n_p = p - 'A';
  n_q = q - 'A';
  if(n_p > n_q) {
    int temp;
    temp = n_p;
    n_p = n_q;
    n_q = temp;
  }
  vi line(7);
  line[0] = 0;
  line[1] = 3;
  line[2] = 4;
  line[3] = 8;
  line[4] = 9;
  line[5] = 14;
  line[6] = 23;
  cout << line[n_q] - line[n_p] << endl;
}