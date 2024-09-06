// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

ll x, y;
int d, m;
int M[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int cycle400 = 146097; // (97 x 366 + 303 x 365)

bool isLeap(ll y) {
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
void addDay(ll &x, int &d, int &m, ll &y) {
    if (isLeap(y)) {
        M[1] = 29;
    } else M[1] = 28;
    d += x;
    while (d > M[m-1]) {
        if (d > M[m-1]) {
            d -= M[m-1];
            m++;
        }
    }
}
void addYear(ll &x, ll &y) {
    if (x >= cycle400) {
        y += (x / cycle400) * 400;
        x %= cycle400;
    }
    if (x < cycle400) {
        while (x > (isLeap(y) ? (366) : (365))) {
            x -= (isLeap(y) ? 366 : 365);
            y++;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> x >> d >> m >> y;

    if (isLeap(y)) M[1] = 29;
    int u = M[m-1] - d + 1;
    for (int i = m; i<12; i++) {
        u += M[i];
    }
    if (x >= u) {
        x -= u;
        d = 1;
        m = 1;
        y++;
        addYear(x, y);
        addDay(x, d, m, y);
    } else {
        addDay(x, d, m, y);
    }
    cout << d << " " << m << " " << y << endl;
    return 0;
}