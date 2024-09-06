// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull n, m;
string S;
vector<vector<char>> board;
bool found = false;

bool sRight(ull &x, ull &y, vector<vector<char>> &board, const string S, bool &found) {
    int cnt = 0;
    ll max = y + S.length() - 1;
    for (int j = y; j <= max; j++) {
        if (board[x][j] != S[cnt++]) {
            break;
        }
    }
    found = (cnt == S.length());
    return found;
}
bool sDown(ull &x, ull &y, vector<vector<char>> &board, const string S, bool &found) {
    int cnt = 0;
    ll max = x + S.length() - 1;
    for (int i = x; i <= max; i++) {
        if (board[i][y] != S[cnt++]) {
            break;
        }
    }
    found = (cnt == S.length());
    return found;
}
bool sLeft(ull &x, ull &y, vector<vector<char>> &board, const string S, bool &found) {
    int cnt = 0;
    ll min = y - S.length() + 1;
    for (int j = y; j >= min; j--) {
        if (board[x][j] != S[cnt++]) {
            break;
        }
    }
    found = (cnt == S.length());
    return found;
}
bool sUp(ull &x, ull &y, vector<vector<char>> &board, const string S, bool &found) {
    int cnt = 0;
    ll min = x - S.length() + 1;
    for (int i = x; i >= min; i--) {
        if (board[i][y] != S[cnt++]) {
            break;
        }
    }
    found = (cnt == S.length());
    return found;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    board.resize(n, vector<char>(m));

    for (ull i = 0; i < n; i++) {
        for (ull j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
    cin >> S;
    
    int len = S.length();
    for (ull i = 0; i < n && !found; i++) {
        for (ull j = 0; j < m && !found; j++) {
            if (board[i][j] == S[0]) {
                if (m - j >= len && !found) {
                    sRight(i, j, board, S, found);
                } if (n - i >= len && !found) {
                    sDown(i, j, board, S, found);
                } if (i + 1 >= len && !found) {
                    sUp(i, j, board, S, found);
                } if (j + 1 >= len && !found) {
                    sLeft(i, j, board, S, found);
                }
            }
        }
    }
    cout << (found ? "YES" : "NO");
    return 0;
}