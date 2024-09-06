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
    set<int> unique_elements(A.begin(), A.end());
    A.assign(unique_elements.begin(), unique_elements.end());
    for (int i=0; i<A.size(); i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}