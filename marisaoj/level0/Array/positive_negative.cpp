// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, pos=0;
    cin >> n;
    int A[n], ans[n];
    vector<int> vpos;
    bool used[n];
    memset(used, 0, sizeof(used));
    memset(ans, 0, sizeof(ans));
    
    for (int i=0; i<n; i++) {
        cin >> A[i];
        if (A[i] > 0) {
            pos++;
            vpos.push_back(A[i]);
        }
    } 
    for (int i=0; i<n; i += (i>=pos*2 ? 1 : 2)) {
        for (int j=0; j<n; j++) {
            if (A[j] < 0 && !used[j]) {
                used[j] = 1;
                ans[i] = A[j];
                break;
            } 
        }
    }
    for (int i=0,k=0; i<n; i++) {
        if (ans[i] == 0) {
            ans[i] = vpos[k];
            k++;
        }
    }
    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}