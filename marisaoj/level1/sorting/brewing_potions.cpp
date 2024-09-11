// haolamnm
// Time: O(N.logN)
// Space: O(N)

#include <bits/stdc++.h>
using namespace std;

int A[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; 
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A + n);
    int res = 0;
    int l = 0;
    int r = n - 1;
    while (l < r) {
        int s = A[l] + A[r];
        if (s <= k) l++;
        r--;
        res++;
    }
    if (l == r) res++;
    cout << res;
    
    return 0;
}