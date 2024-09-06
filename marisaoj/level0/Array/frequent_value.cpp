// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cnt=0;
    cin >> n;
    vector<int> A;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    unordered_map<int, int> umap;
    for (int i=0; i<A.size(); i++) {
        umap[A[i]]++;
    }
    for (const auto& entry : umap) {
        if (entry.second > 2) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}