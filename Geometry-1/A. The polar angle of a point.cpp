#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PI acos(-1.0)

void solve(){
    ld x, y;
    cin >> x >> y;
    double angle = atan2(y, x);
    if(angle < 0) angle += 2 * PI;
    cout << fixed << setprecision(15) << angle << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("angle1.in", "r", stdin);
    freopen("angle1.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/A
// CF GYM LINK: https://codeforces.com/gym/100168/submit 