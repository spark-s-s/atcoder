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
  int h, w; cin >> h >> w;
  vvb s(h, vb(w));
  REP(i, h) {
    REP(j, w) {
      char c; cin >> c;
      if (c == '#') s[i][j] = true;
      else s[i][j] = false;
    }
  }
  int x_a, y_a, count;
  bool f = false;
  REP(i, h) {
    REP(j, w) {
      count = 0;
      if(!s[i][j]) {
        if(i!=0) {
          if(s[i-1][j]) count++;
        }
        if(i!=h-1) {
          if(s[i+1][j]) count++;
        }
        if(j!=0) {
          if(s[i][j-1]) count++;
        }
        if(j!=w-1) {
          if(s[i][j+1]) count++;
        }
      }
      if(count > 1) {
        x_a = i + 1;
        y_a = j + 1;
        f = true;
        break;
      }
    }
    if(f) break;
  }
  cout << x_a << " " << y_a << endl;
}