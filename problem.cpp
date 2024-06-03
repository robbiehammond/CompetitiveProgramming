#ifdef LOCAL
#define _GLIBCXX_DEBUG
#endif
#define TC(t)                                                                  \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)
#include "bits/stdc++.h"

using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
int di[4] = {0, 1, 0, -1};
int dj[4] = {1, 0, -1, 0};

template <class T> void PRINT(vector<vector<T>> v) {
  for (auto a : v) {
    for (auto b : a) {
      cout << b << " ";
    }
    cout << '\n';
  }
}

template <class T> void PRINT(vector<T> v) {
  for (auto a : v)
    cout << a << " ";
  cout << '\n';
}

bool contains(vector<int> &v, int a) {
  return find(v.begin(), v.end(), a) != v.end();
}

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  /*
    solve();
#ifdef LOCAL
    cerr << endl
        << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
    return 0;
  */

  TC(t) {
#ifdef LOCAL
    cout << "__________________________" << endl;
#endif
    solve();
  }
#ifdef LOCAL
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
