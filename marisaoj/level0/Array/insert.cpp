// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    vector<int> A, B;
    cin >> n >> q;
    
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        A.push_back(x);
    }
    for (int i=0; i<q*2; i++) {
        int x; cin >> x;
        B.push_back(x);
    }
    for (int i=1; i<=q*2; i+=2) {
        A.insert(A.begin()+B[i-1]-1, B[i]);
        for (int i=0; i<A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}