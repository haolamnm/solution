// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }
    sort(vp.begin(), vp.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    });

    // Greedy approach
    unsigned long long fill_time = 0, total_time = 0;
    
    for (int i = 0; i < n; i++) {
        fill_time += vp[i].first;
        total_time = max(total_time, fill_time + vp[i].second);
    }
    cout << total_time << endl;

    return 0;
}