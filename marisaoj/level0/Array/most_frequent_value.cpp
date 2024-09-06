// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> A;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    unordered_map<int, int> umap;
    for (int i=0; i<A.size(); i++) {
        umap[A[i]]++;
    }
    int max = 0;
    for (const auto& pair : umap) {
        if (pair.second > max) {
            max = pair.second;
        }
    }
    A.clear();
    for (const auto& pair : umap) {
        if (pair.second == max) {
            A.push_back(pair.first);
        }
    }
    cout << *max_element(A.begin(), A.end());
    
    return 0;
}