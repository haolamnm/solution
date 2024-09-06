// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    string X = S;
    reverse(X.begin(), X.end());
    cout << ((X == S) ? "YES" : "NO");
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}