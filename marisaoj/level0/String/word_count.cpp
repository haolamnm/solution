// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S, word;
    getline(cin, S);
    stringstream Sstream(S);
    unsigned int cnt;
    while (Sstream >> word) {
        cnt++;
    }
    cout << cnt;
 
    return 0;
}