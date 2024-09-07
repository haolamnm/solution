// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, q;
ll A[100005];
ll B[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    cin >> n >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        A[l]++;
        A[r+1] -= r-l+1; 
        B[l+1]++;
        B[r+1]--;
    }
    for (int i = 1; i <= n; i++) {
        B[i] += B[i-1];
        A[i] = A[i] + A[i-1] + B[i];
        cout << A[i] << ' ';
    }
    return 0;
}