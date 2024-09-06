// haolamnm

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    size_t n; cin >> n;
    vector<unsigned int> A(n);
    
    unordered_map<unsigned int, ull> freq;

    for (size_t i=0; i<n; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }

    ull cnt=0;
    for (const auto& pair : freq) {
        ull k = pair.second;
        if (k>1) {
            if (k % 2 == 0) cnt += (k/2) * (k-1);
            else cnt += ((k-1)/2) * k;
        }
    }
    cout << cnt;

    return 0;
}