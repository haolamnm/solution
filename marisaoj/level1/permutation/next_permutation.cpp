// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> p(n);
    iota(p.begin(), p.end(), 1);
    do {
        for (int x : p) {
            cout << x << ' ';
        }
        cout << endl;
    } while (next_permutation(p.begin(), p.end()));

    return 0;
}