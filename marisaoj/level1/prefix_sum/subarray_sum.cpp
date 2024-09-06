// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int n, x;
ll A[100005];
unordered_map<ll, int> pref;
ull res = 0, curr_pref = 0;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> x;
    
    pref[0] = 1;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        curr_pref += A[i];

        if (pref.find(curr_pref - x) != pref.end()) {
            res += pref[curr_pref - x];
        }
        pref[curr_pref]++;
    }
    cout << res;
    
    return 0;
}