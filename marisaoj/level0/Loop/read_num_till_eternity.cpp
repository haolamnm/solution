// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    for (int i=0; i<=1000; i++) {
        long long int n;
        cin >> n;
        if (n == 0) break;
        else cout << fixed << setprecision(0) << pow(n, 5) << endl;
    }
 
    return 0;
}