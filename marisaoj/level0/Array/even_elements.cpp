// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned int n, cnt=0;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int i=0; i<n; i++) {
        if (A[i] % 2 == 0) cnt++;
    }
    cout << cnt;
 
    return 0;
}