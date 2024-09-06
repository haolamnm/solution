// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long int n, temp=0;
    cin >> n;
    n = abs(n);
    while (n != 0) {
        temp += (n % 10);
        n /= 10;
    }
    cout << temp;
 
    return 0;
}