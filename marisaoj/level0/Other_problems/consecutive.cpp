// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, num, cnt = 0;
    cin >> n;
    for (ll i = 2; i < n; i++) {
        num = n - (i * (i-1)) / 2;
        if (num < 0) break;
        if (num % i == 0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}