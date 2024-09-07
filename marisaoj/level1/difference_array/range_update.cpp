// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> diff(n+1, 0);
    while(q--) {
        int l, r;
        cin >> l >> r;
        diff[r+1]--;
        diff[l]++;
    }
    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i-1];
        cout << diff[i] << ' ';
    }
    return 0;
}