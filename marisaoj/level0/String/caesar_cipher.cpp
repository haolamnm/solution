// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    unsigned int k;
    getline(cin, S);
    cin >> k;
    for (int i=0; i<S.length(); i++) {
        if(S[i] == ' ') {
            cout << ' ';
        } else if(122 - (int)S[i] >= k) {
            cout << (char)((int)S[i] + k);
        } else {
            cout << (char)((int)S[i] + k - 122 + 96);
        }
    }
 
    return 0;
}