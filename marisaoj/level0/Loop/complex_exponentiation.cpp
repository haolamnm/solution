// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int64_t binpow(int64_t a, int64_t b, int64_t c) {
    int64_t res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    return res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int64_t a, b, c;
    cin >> a >> b >> c;
    cout << binpow(a, b, c) << endl;
    
    return 0;
}