// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned short int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) cout << "YES";
    else cout << "NO";
 
    return 0;
}