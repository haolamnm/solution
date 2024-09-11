// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for (const char &ch : s) {
            if (parens.find(ch) != parens.end()) {
                if (open.empty()) {
                    return false;
                }
                if (open.top() != parens[ch]) {
                    return false;
                }
                open.pop();
            } else {
                open.push(ch);
            }
        }
        return open.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}