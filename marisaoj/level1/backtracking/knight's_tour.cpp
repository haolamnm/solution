#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> b;
vector<vector<bool>> v;
vector<pair<int, int>> p = {
    {2, -1}, {2, 1}, {1, 2}, {-1, 2},
    {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}
};

// Warnsdorff's Rule: Count possible moves from (x, y)
int cnt_moves(int x, int y) {
    int cnt = 0;
    for (auto &[dx, dy] : p) {
        int nx = x + dx, ny = y + dy;
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !v[nx][ny]) cnt++;
    }
    return cnt;
}

void print_board() {
    for (auto &r : b) {
        for (auto &c : r) cout << setw(3) << c;
        cout << endl;
    }
    cout << endl;
}

void solve(int x, int y, int cnt) {
    if (cnt == n * m) {
        print_board();
        exit(0); // Exit immediately after finding the solution
    }
    
    // Collect next moves and sort by Warnsdorff's Rule
    vector<pair<int, int>> moves;
    for (auto &[dx, dy] : p) {
        int nx = x + dx, ny = y + dy;
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !v[nx][ny])
            moves.push_back({nx, ny});
    }
    
    sort(moves.begin(), moves.end(), [&](pair<int, int> &a, pair<int, int> &b) {
        return cnt_moves(a.first, a.second) < cnt_moves(b.first, b.second);
    });
    
    // Try each move
    for (auto &[nx, ny] : moves) {
        v[nx][ny] = true;
        b[nx][ny] = cnt + 1;
        solve(nx, ny, cnt + 1);
        v[nx][ny] = false;
        b[nx][ny] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    b.resize(n, vector<int>(m, 0));
    v.resize(n, vector<bool>(m, 0));

    v[0][0] = true;
    b[0][0] = 1;
    solve(0, 0, 1);

    cout << "No solution found\n";
    return 0;
}