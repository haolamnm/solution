// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    float n, sum=0;
    cin >> n;
    int A[(int)n];
    for (int i=0; i<n; i++) {
        cin >> A[i];
        sum += A[i];
    }
    cout << fixed << setprecision(3) << sum / n;
 
    return 0;
}