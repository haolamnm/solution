// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long int d, h, m, s;
    cin >> d;
    h = d / 3600;
    m = d % 3600 / 60;
    s = d % 3600 % 60;
    cout << h << " " << m << " " << s; 
 
    return 0;
}