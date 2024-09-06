// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S, T;
    int cnt=0;
    getline(cin, S);
    getline(cin, T);
 
    for (int i=0; i<S.length(); i++) {
        if (S[i] == T[0]) {
            string sub = S.substr(i, T.length());
            if (sub == T) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}