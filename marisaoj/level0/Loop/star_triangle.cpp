// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned int a;
    cin >> a;
    for (int i=a; i>=1; i--) {
        cout << string(i, '*') << endl;
    }
 
    return 0;
}