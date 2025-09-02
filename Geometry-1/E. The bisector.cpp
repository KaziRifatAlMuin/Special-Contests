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

// Eqn of line passing point (x1,y1) and (x2,y2): (y2-y1)x + (x1-x2)y + y1(x2-x1) - x1(y2-y1) = 0

void solve(){
    point x, y, z;
    cin >> x.x >> x.y >> y.x >> y.y >> z.x >> z.y;
    point a = ((y - x) * val(z - x) / val(y-x)) + (z - x) + x;
    cout << fixed << setprecision(15) << a.y - x.y << " " << x.x - a.x << " " << x.y * (a.x - x.x) - x.x * (a.y - x.y) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("bisector.in", "r", stdin);
    freopen("bisector.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/E