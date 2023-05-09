#ifdef LOCAL
    #define _GLIBCXX_DEBUG
#endif
#define TC(t) int t; cin >> t; while (t--)
#include <bits/stdc++.h>
 
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
 
typedef long long ll;
typedef long double ld;
 
void solve() {
    int a;
    cin >> a;
    cout << a << '\n';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    TC(t) {
        #ifdef LOCAL
            cout << "__________________________" << endl;
        #endif
        solve();
    }
    #ifdef LOCAL
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}
