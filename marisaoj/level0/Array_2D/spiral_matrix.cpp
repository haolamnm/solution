// haolamnm

#include <bits/stdc++.h>
using namespace std;

void goRight(int &x, int &y, int n, int m, int &cnt, vector<vector<int>> &nums) {
    while (y+1 <= m-1 && nums[x][y+1] == 0) {
        nums[x][y] = cnt++;
        y++;
    }
    if (x >= 0 && y <= m-1) nums[x][y] = cnt++;
    if (x < n-1) x++;
}
void goDown(int &x, int &y, int n, int m, int &cnt, vector<vector<int>> &nums) {
    while (x+1 <= n-1 && nums[x+1][y] == 0) {
        nums[x][y] = cnt++;
        x++;
    }
    if (x <= n-1 && y <= m-1) nums[x][y] = cnt++;
    if (y > 0) y--;
}
void goLeft(int &x, int &y, int n, int m, int &cnt, vector<vector<int>> &nums) {
    while (y-1 >= 0 && nums[x][y-1] == 0) {
        nums[x][y] = cnt++;
        y--;
    }
    if (x <= n-1 && y >= 0) nums[x][y] = cnt++;
    if (x > 0) x--;
}
void goUp(int &x, int &y, int n, int m, int &cnt, vector<vector<int>> &nums) {
    while (x-1 >= 0 && nums[x-1][y] == 0) {
        nums[x][y] = cnt++;
        x--;
    }
    if (x >= 0 && y >= 0) nums[x][y] = cnt++;
    if (y < n-1) y++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0, m = 0, x = 0, y = 0, cnt = 1;
    cin >> n >> m;
    vector<vector<int>> nums(n, vector<int>(m));

    while (true) {
        if (nums[x][y] == 0) goRight(x, y, n, m, cnt, nums);
        if (nums[x][y] == 0) goDown(x, y, n, m, cnt, nums);
        if (nums[x][y] == 0) goLeft(x, y, n, m, cnt, nums);
        if (nums[x][y] == 0) goUp(x, y, n, m, cnt, nums);
        if (nums[x][y] != 0) break;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}