// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    size_t n; cin >> n;
    vector<unsigned int> A(n);
    vector<ull> R(3, 0);
    ull cnt=0;

    for (size_t i=0; i<n; i++) {
        cin >> A[i];
        unsigned int r = A[i] % 3;
        if (r==0) {
            cnt += R[0];
        } else if (r==1) {
            cnt += R[2];
        } else if (r==2) {
            cnt += R[1];
        }
        R[r]++;
    }
    cout << cnt;

    return 0;
}