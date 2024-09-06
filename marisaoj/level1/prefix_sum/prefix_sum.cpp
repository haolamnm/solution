// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned n, q;
    cin >> n >> q;
    vector<ll> nums(n);
    vector<ll> pref(n+1, 0);
    for (unsigned i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (unsigned i = 1; i < n+1; i++) {
        pref[i] = pref[i-1]  + nums[i-1];
    }
    for (unsigned i = 0; i < q; i++) {
        unsigned int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << endl;
    }
    return 0;
}