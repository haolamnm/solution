// haolamnm
 
#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int ull;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
 
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    
    vector<pair<int, int>> vp;
    while (n--) {
        int A, B; cin >> A >> B;
        vp.push_back({A, B});
    }
    ull time = 0;
    ull min_time = ULONG_LONG_MAX;
    do {
        time = vp[v[0]-1].first;
 
        for (int i = 0; i < v.size()-1; i++) {
            time += max(vp[v[i]-1].second, vp[v[i+1]-1].first);
        }
        time += vp[v[v.size()-1]-1].second;
        
        min_time = min(min_time, time);
    } while (next_permutation(v.begin(), v.end()));
    
    cout << min_time;
 
    return 0;
}