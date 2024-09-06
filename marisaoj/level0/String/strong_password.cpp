// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    getline(cin, S);
    unsigned int u=0, l=0, d=0;
    for (char &c : S) {
        if (isupper(c)) u++;
        if (islower(c)) l++;
        if (int(c)-48 <= 9) d++;
    }
    if (S.length()>=8 && u>=1 && l>=1 && d>=1) {
        cout << "STRONG";
    } else cout << "WEAK";
 
    return 0;
}