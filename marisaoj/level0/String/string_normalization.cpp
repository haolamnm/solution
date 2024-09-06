// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, res;
    getline(cin, S);
    bool cap=1;
    for (int i=0; i<S.length(); i++) {
        if (S[i] == ' ') {
            cap=1;
            if(!res.empty() && res.back() != ' ') {
                res += ' ';
            }
        } else if (cap) {
            res += toupper(S[i]);
            cap=0;
        } else {
            res += tolower(S[i]);
        }
    }
    if (!res.empty() && res.back() == ' ') {
        res.pop_back();
    }
    cout << res;

    return 0;
}