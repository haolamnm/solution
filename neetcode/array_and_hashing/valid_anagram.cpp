// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        map<char, int> map;
        for (int i = 0; i < s.length(); i++) {
            map[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            map[t[i]]--;
        }
        for (const auto& pair : map) {
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}