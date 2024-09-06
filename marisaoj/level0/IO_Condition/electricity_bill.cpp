// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    unsigned int temp[] = {0, 0, 0, 0};
    if (x > 150) {
        temp[3] = x - 150;
        x = 150;
    } 
    if (x > 100) {
        temp[2] = x - 100;
        x = 100;
    } 
    if (x > 50) {
        temp[1] = x - 50;
        x = 50;
    } 
    temp[0] = x;
    cout << temp[0]*a + temp[1]*b + temp[2]*c + temp[3]*d;
 
    return 0;
}