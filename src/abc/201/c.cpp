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
  int ans = 0;
  vvb data(10, vb(2, false));
  REP(i, 10) {
    char tmp;
    cin >> tmp;
    if (tmp == 'o') data[i][0] = true;
    else if (tmp == 'x') data[i][1] = true;
  }
  vb pass(10, false);
  REP(i, 10) {
    REP(j, 10) {
      REP(k, 10) {
        REP(l, 10) {
          bool is_good = true;
          vb pass(10, false);
          pass[i] = true;
          pass[j] = true;
          pass[k] = true;
          pass[l] = true;
          REP(m, 10) {
            if (data[m][0] && !pass[m]) is_good = false;
            if (data[m][1] && pass[m]) is_good = false;
          }
          if (is_good) ans++;
        }
      }
    }
  }
  cout << ans << endl;
}