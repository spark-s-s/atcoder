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
  int a = 0, b = 0, ans;
  REP(i, 10) {
    char tmp;
    cin >> tmp;
    if (tmp == 'o') a++;
    else if (tmp == '?') b++;
  }
  switch (a) {
    case 0: ans = pow(b, 4); break;
    case 1: ans = pow(b+1, 4) - pow(b, 4); break;
    case 2:
      switch (b) {
        case 0: ans = 2*2*2*2-2; break;
        default: ans = pow(b+2, 4) - 2; break;
      }
    case 3:
      switch (b) {
        case 0: ans = 3*4*3/2*2; break;
        default: ans = 3*4*3/2*2 + 4*3*2*b; break;
      }
    case 4: ans = 4*3*2; break;
    default: ans = 0; break;
  }
}