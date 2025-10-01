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

void solve(){
    int n;
    cin >> n;
    vector <point> p(n);
    double area = 0;
    for(int i = 0; i < n; i++){
        double x, y; cin >> x >> y;
        p[i] = {x,y}; // points of polygon
    }
    for(int i = 0; i < n; i++){
        area += (p[i] * p[(i+1)%n]) / 2.0; // anticlockwise = +ve area, clockwise = -ve area
    }
    area = fabs(area); // absolute value of area
    cout << fixed << setprecision(15) << area <<"\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("area.in", "r", stdin);
    freopen("area.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/C