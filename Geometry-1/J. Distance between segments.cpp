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
double val(point a) { return sqrt(a | a); }
tuple <double, double, double> pointToLine(point a, point b){ 
    return {( b.y - a.y), (a.x - b.x), (a.y * (b.x - a.x) - a.x * (b.y - a.y)) };
}
double pointLineDistance(point p, double a, double b, double c){
    return fabs(a * (p.x) + b * (p.y) + c) / (sqrt(a*a + b*b));
}
double pointLineDistance(point p, point a, point b){
    return fabs((p-a) * (b-a)) / val(b-a);
}
double pointRayDistance(point p, point a, point b){
    if(((p-a)|(b-a)) < 0) return val(p-a); 
    else return fabs((p-a) * (b-a)) / val(b-a);
}
double pointSegmentDistance(point p, point a, point b){
    if(((p-a)|(b-a)) < 0 && ((p-b)|(a-b)) > 0) return val(p-a);
    else if(((p-a)|(b-a)) > 0 && ((p-b)|(a-b)) < 0) return val(p-b);
    else return fabs((p-a) * (b-a)) / val(b-a);
}
double segmentSegmentDistance(point a, point b, point c, point d){
    bool dif1 = ((b-a)*(c-a) >= 0 && (b-a)*(d-a) <= 0) || ((b-a)*(c-a) <= 0 && (b-a)*(d-a) >= 0);
    bool dif2 = ((d-c)*(a-c) >= 0 && (d-c)*(b-c) <= 0) || ((d-c)*(a-c) <= 0 && (d-c)*(b-c) >= 0);
    if(dif1 == true && dif2 == true) return 0;
    else return min({
        pointSegmentDistance(a,c,d), pointSegmentDistance(b,c,d), 
        pointSegmentDistance(c,a,b), pointSegmentDistance(d,a,b)
    });
}

void solve(){
    point a, b, c, d;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    cout << fixed << setprecision(15) << segmentSegmentDistance(a,b,c,d) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("distance5.in", "r", stdin);
    freopen("distance5.out", "w", stdout);
    ll t = 1, st = clock();
    // cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://vjudge.net/contest/741635#problem/J