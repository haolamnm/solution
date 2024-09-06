// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cnt=0; cin >> n;
    if (n < 10) cout << 0;
    else { 
        for (int x=1; x<=n-3; x++) {
            for (int y=x+1; y<=n-2; y++) {
                for (int z=y+1; z<=n-1; z++) {
                    int t = n - x - y - z;
                    if (t > z) cnt++;
                }
            }
        }
        cout << cnt;
    }
    
    return 0;
}