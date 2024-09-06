// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    cout << floor(n/5) + floor(n/25) + floor(n/125) + floor(n/625);
 
    return 0;
}