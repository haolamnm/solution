// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    getline(cin, n);
    bitset<32> bits(n);
    cout << bits.to_ulong();
    
    return 0;
}