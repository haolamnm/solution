// haolamnm

#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>>& res, vector<int>& nums, vector<int>& sol, vector<bool>& used, int k) {
    if (sol.size() == k) {
        res.push_back(sol);
        return;
    }
    for (int i=0; i<nums.size(); i++) {
        if (sol.empty() || (!used[i] && nums[i] > sol.back())) {
            used[i] = 1;
            sol.push_back(nums[i]);
            backtrack(res, nums, sol, used, k);
            used[i] = 0;
            sol.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> res;
    vector<int> nums, sol;
    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        nums.push_back(i);
    }
    vector<bool> used(nums.size(), 0);
    backtrack(res, nums, sol, used, k);

    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}