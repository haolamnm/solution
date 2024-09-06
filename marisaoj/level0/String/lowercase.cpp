// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    getline(cin, S);
    for (char &c : S) {
        c = tolower(c);
    }
    cout << S;
 
    return 0;
}