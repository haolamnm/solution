// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long int n;
    cin >> n;
    for (int i=n-1; i>=2; i--) {
        n *= i;
    }
    cout << n;
 
    return 0;
}