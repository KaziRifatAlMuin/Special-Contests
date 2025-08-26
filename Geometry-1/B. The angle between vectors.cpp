#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PI acos(-1.0)

void solve(){
    ld x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ld xy = x1 * x2 + y1 * y2;
    ld a = sqrt(x1 * x1 + y1 * y1), b = sqrt(x2 * x2 + y2 * y2);
    // cout << a << " " << b << "\n";
    double angle = acos(xy / (a * b));
    // if(angle < 0) angle += 2 * PI;
    cout << fixed << setprecision(15) << angle << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("angle2.in", "r", stdin);
    freopen("angle2.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/B