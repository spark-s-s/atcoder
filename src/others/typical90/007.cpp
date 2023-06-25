#include <bits/stdc++.h>
#include <atcoder/all>
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
  // 各B_iについてiでにぶたん
  int n; cin >> n;
  vi a(n); REP(i, n) cin >> a[n];
  int q; cin >> q;
  REP(i, q) {
    int b; cin >> b;
    int left = 0, right = n-1;
    while (right - left >= 1){
      int mid = left + (right - left) / 2;
      if (X[mid] > b) right = mid - 1;
      else if (X[mid] < b) left = mid + 1;
    }
  }
  if(mid = 0) cout << 
}