// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long n; 
    cin >> n;
    for (int i=0; i<=n/2; i++) {
        if (pow(2, i) >= n) {
            cout << i;
            break;
        }
    }
 
    return 0;
}