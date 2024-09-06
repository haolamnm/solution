// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    getline(cin, S);
    unsigned int n=0;
    for (char &c : S) {
        if (c == ' ') n +=0;
        else n += ((int)c-48);
    }
    cout << n;
 
    return 0;
}