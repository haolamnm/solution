// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    bool ok=1;
    long long sum=0, temp=0;
    cin >> a >> b;
    sum = a + b;
    while (sum != 0) {
        temp = sum % 10;
        if (temp != 0 && ok) ok=0;
        if (!ok) cout << temp;
        sum /= 10;
    }
    
    return 0;
}