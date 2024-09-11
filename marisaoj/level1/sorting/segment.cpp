// haolamnm

#include <bits/stdc++.h>
#define se second
#define fi first
using namespace std;

int n;
vector<pair<int, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.se < b.se;
    });
    int res = 0;
    int l = 0;
    while (l <= n-1) {
        int i = 1;
        while (v[l].se >= v[l + i].fi && l + i <= n-1) {
            i++;
        }
        res++;
        l += i;
    }
    cout << res;

    return 0;
}