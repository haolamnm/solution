// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    getline(cin, S);
    unsigned int cnt;
    for (char &c : S) {
        c = tolower(c);
        if (c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i') {
            cnt++;
        }
    }
    cout << cnt;
 
    return 0;
}