// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

unsigned n, d;
ll A[100005];
ll pref = 0;
ull res = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> d;
    vector<ll> pref_cnt(d, 0);

    pref_cnt[0] = 1; // {} divisible by d

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        pref += A[i];
        ll mod = ((pref % d) + d) % d;

        res += pref_cnt[mod];
        pref_cnt[mod]++;
    }
    cout << res;    
    return 0;
}