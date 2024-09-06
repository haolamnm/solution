// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    cin >> S;
    int n = S.size();
    int res = 0;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
        res++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (S[i] == S[i + 1]) {
            dp[i][i + 1] = true;
            res++;
        }
    }

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (S[i] == S[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                res++;
            }
        }
    }
    cout << res << endl;

    return 0;
}