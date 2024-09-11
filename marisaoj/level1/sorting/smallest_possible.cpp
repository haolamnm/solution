// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

string n;
string res = "";
int arr[10] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    getline(cin, n);
    for (int i = 0; i < n.length(); i++) {
        arr[n[i] - '0']++;
    }
    for (int i = 1; i < 10; i++) {
        if (arr[i] > 0) {
            res += char(i + '0');
            arr[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        res.append(arr[i], char(i + '0'));
    }
    cout << res;

    return 0;
}