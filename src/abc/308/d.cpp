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

// http://www.elc.ees.saitama-u.ac.jp/ProgrammingI/No11-6.pdf
int CanGo(int x, int y, char dir, vvi s) {
  switch (dir) {
    case 't':
      if (s[x-1][y] - s[x][y] == 1 || s[x-1][y] - s[x][y] == -4) return 1;
      else return 0;
    case 'b':
      if (s[x+1][y] - s[x][y] == 1 || s[x-1][y] - s[x][y] == -4) return 1;
      else return 0;
    case 'l':
      if (s[x][y-1] - s[x][y] == 1 || s[x-1][y] - s[x][y] == -4) return 1;
      else return 0;
    case 'r':
      if (s[x][y-1] - s[x][y] == 1 || s[x-1][y] - s[x][y] == -4) return 1;
      else return 0;
  }
  return 0;
}

int main() {
  int h, w;
  cin >> h >> w;
  vvi s(h+2, vi(w+2));
  REP(i, h) {
    REP(j, w) {
      char tmp;
      cin >> tmp;
      switch (tmp) {
        case 's':
          s[i+1][j+1] = 1;
          break;
        case 'n':
          s[i+1][j+1] = 2;
          break;
        case 'u':
          s[i+1][j+1] = 3;
          break;
        case 'k':
          s[i+1][j+1] = 4;
          break;
        case 'e':
          s[i+1][j+1] = 5;
          break;
        default:
          s[i+1][j+1] = 1e9;
      }
    }
  }
  REP(i, h+2) s[i][0] = 1e9;
  REP(i, h+2) s[i][w+1] = 1e9;
  REP(i, w+2) s[0][i] = 1e9;
  REP(i, w+2) s[h+1][i] = 1e9;
  int x = 1, y = 1;
  while()
}
