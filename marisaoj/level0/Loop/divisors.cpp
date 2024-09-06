// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int n;
    cin >> n;
    cout << 1 << " ";
    for (int i=2; i<=n/2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << n;

    return 0;
}