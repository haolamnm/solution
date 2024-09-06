// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    short int n; cin >> n;
    for (int i=n-n%2; i>=2; i-=2) {
        cout << i << " ";
    }
 
    return 0;
}