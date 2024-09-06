// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, i=0, k=0, ans=0;
    cin >> N;
    vector<int> a;
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    while (i < N-1) {
        if (a[i] <= a[k+1]) i=k+1;
        if (k == N-1) {
            i++; k=i-1;
            ans++;
        } k++;
    }
    cout << ans;
 
    return 0;
}