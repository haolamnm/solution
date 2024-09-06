// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
    ull sum = n+1;
    for (ull i=2; i*i<=n; i++) {
        if (n % i == 0) {
            sum += i;
            if (n/i != i) sum += n/i;
        }
    }
    cout << sum;

    return 0;
}