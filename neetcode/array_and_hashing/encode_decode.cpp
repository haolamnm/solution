// haolamnm

class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (const string& str : strs) {
            int n = str.length();
            s += to_string(n) + "*" + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int n = 0, i = 0;
        while (i < s.length()) {
            if (isdigit(s[i])) {
                n = n*10 + ((int)s[i] - '0');
                i++;
            } else if (s[i] == '*') {
                res.push_back(s.substr(i+1, n));
                i += n+1;
                n = 0;
            }
        }
        return res;
    }
};

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}