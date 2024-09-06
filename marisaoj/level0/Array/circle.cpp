// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, y, cir=0;
    vector<int> A;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
        cir += x;
    }

    cin >> x >> y;
    if (x > y) {
        swap(x, y);
    }

    int sum=0;
    for (int i=x-1; i<y-1; i++) {
        sum += A[i];
    }
    if (sum >= cir - sum) {
        cout << cir - sum;
    } else cout << sum;

    return 0;
}