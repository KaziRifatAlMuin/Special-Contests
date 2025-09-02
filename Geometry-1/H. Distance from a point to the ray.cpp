#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PI acos(-1.0)

#define point pair <double,double>
#define x first
#define y second

point operator + (point a, point b) { return {a.x + b.x, a.y + b.y}; }
point operator - (point a, point b) { return {a.x - b.x, a.y - b.y}; }
double operator | (point a, point b) { return a.x * b.x + a.y * b.y; }
double operator * (point a, point b) { return a.x * b.y - a.y * b.x; }
point operator * (point a, double m) { return {a.x * m, a.y * m}; }
point operator / (point a, double m) { return {a.x / m, a.y / m}; }
double val(point a) { return sqrt(a.x * a.x + a.y * a.y); }

// sintheta = h / |p-a|
// h = |p-a| sintheta = (p-a)*(b-a) / |b-a|

void solve(){
    point p, a, b;
    cin >> p.x >> p.y >> a.x >> a.y >> b.x >> b.y;
    double d = fabs((p-a) * (b-a)) / val(b-a);
    if(((p-a)|(b-a)) >= 0) cout << fixed << setprecision(15) << d << "\n";
    else cout << fixed << setprecision(15) << val(p-a) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("distance3.in", "r", stdin);
    freopen("distance3.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/H