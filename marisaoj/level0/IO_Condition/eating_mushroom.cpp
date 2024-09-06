// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned int x, y, res=0;
    cin >> x >> y;
    while (y--) {
        if (x == 7) ++x;
        else if (x == 8) x = 2; 
        else {
            ++res;
            ++x;
        }
    }
    cout << res;
 
    return 0;
}