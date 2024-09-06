// haolamnm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string C, D;
    cin >> C >> D;
    C = C + ' ';
    for (int i=0, cnt=1; i<(int)C.size()-1; i++) {
        if (C[i] != C[i+1]) {
            cout << cnt << C[i];
            cnt=1;
        } else cnt++;
    }
    cout << endl;
    for (int i=0, len=0; i<(int)D.size(); i++) {
        if (D[i] >= 'a' && D[i] <= 'z') {
            cout << string(len, D[i]);
            len=0;
         } else len = len * 10 + D[i] - '0';
    }

    return 0;
}