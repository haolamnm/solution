// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;

unsigned int n, m;
int x = 0, y = 0;
vector<vector<int>> matrix;
bool found = false;
vector<int> ans;

void checkRight(int &x, int &y, vector<vector<int>> &matrix, bool &found) {
    if (y + 1 < matrix[x].size()) {
        y++;
        ans.push_back(matrix[x][y]);
        found = true;
    } else found = false;
}
void checkDown(int &x, int &y, vector<vector<int>> &matrix, bool &found) {
    if (x + 1 < matrix.size()) {
        x++;
        ans.push_back(matrix[x][y]);
        found = true;
    } else found = false;
}
void diagnolDown(int &x, int &y, vector<vector<int>> &matrix, bool &found) {
    while (y > 0 && x+1 < matrix.size()) {
        x++;
        y--;
        ans.push_back(matrix[x][y]);
    }
    found = false;
}
void diagnolUp(int &x, int &y, vector<vector<int>> &matrix, bool &found) {
    while (x > 0 && y+1 < matrix[x].size()) {
        x--;
        y++;
        ans.push_back(matrix[x][y]);
    }
    found = false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    matrix.resize(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    ans.push_back(matrix[x][y]);
    while (!(x == n-1 && y == m-1)) {
        if (!found) checkRight(x, y, matrix, found);
        if (!found) checkDown(x, y, matrix, found);
        diagnolDown(x, y, matrix, found);

        if (!found) checkDown(x, y, matrix, found);
        if (!found) checkRight(x, y, matrix, found);
        diagnolUp(x, y, matrix, found);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}