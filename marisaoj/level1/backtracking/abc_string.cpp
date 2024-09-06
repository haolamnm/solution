// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
void backtrack(vector<vector<char>>& res, vector<char>& ch, vector<char>& sol, int n) {
    if (sol.size() == n) {
        res.push_back(sol);
        return;
    }
    for (int i=0; i<ch.size(); i++) {
        if (sol.empty() || ch[i] != sol.back()) {
            sol.push_back(ch[i]);
            backtrack(res, ch, sol, n);
            sol.pop_back();
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    vector<vector<char>> res;
    vector<char> ch, sol;
    int n;
    cin >> n;
    ch = {'A','B','C'};
    backtrack(res, ch, sol, n);
    
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) {
            cout << res[i][j];
        }
        cout << endl;
    }
 
    return 0;
}