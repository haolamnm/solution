// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unsigned n, q, m;
    cin >> n >> q >> m;

    vector<ll> A(n+5, 0);
    vector<ll> Q(q+5, 0);
    vector<pair<unsigned, unsigned>> S(q+5);

    for (int i = 1; i <= q; i++) {
        unsigned l, r;
        cin >> l >> r;
        S[i] = {l, r};
    }
    for (int i = 1; i <= m; i++) {
        unsigned x, y;
        cin >> x >> y;
        Q[x]++;
        Q[y+1]--;
    }
    for (int i = 1; i <= q; i++) {
        Q[i] += Q[i-1];
    }
    for (unsigned i = 1; i <= q; i++) {
        A[S[i].first] += Q[i];
        A[S[i].second+1] -= Q[i];
    }
    for (int i = 1; i <= n; i++) {
        A[i] += A[i-1];
        cout << A[i] << ' ';
    }
    return 0;
}