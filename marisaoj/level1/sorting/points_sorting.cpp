// haolamnm
// 300ms

#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<tuple<unsigned, unsigned, unsigned>> A(n);
    for (int i = 0; i < n; i++) {
        unsigned x, y, z;
        cin >> x >> y >> z;
        A[i] = make_tuple(x, y, z);
    }
    sort(A.begin(), A.end());
    for (const auto& t : A) {
        cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << endl;
    }
    return 0;
}