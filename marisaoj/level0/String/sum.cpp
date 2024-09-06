// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull solve(const string &S) {
    stringstream ss(S);
    string segment;
    vector<string> vecS;
    ull sum=0;
    while (getline(ss, segment, ' ')) {
        string nums;
        for (char ch : segment) {
            if (isdigit(ch)) nums += ch;
        }
        if (!nums.empty()) vecS.push_back(nums);
        nums.clear();
    }
    for (int i=0; i<vecS.size(); i++) {
        sum += stoull(vecS[i]);
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    getline(cin, S);
    cout << solve(S) << endl;
    
    return 0;
}