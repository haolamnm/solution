// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    char c;
    cin >> c;
    if (isupper(c)) cout << (char)tolower(c);
    else cout << (char)toupper(c);
 
    return 0;
}