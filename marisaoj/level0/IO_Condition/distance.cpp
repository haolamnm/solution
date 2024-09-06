// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = a - c;
    y = b - d;
    double ans = sqrt(x*x + y*y);
    cout << fixed << setprecision(2) << ans;
 
    return 0;
}