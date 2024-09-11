// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> nums_map;
        for (int num : nums) {
            nums_map[num]++;
        }
        vector<pair<int, int>> v;
        for (const auto& pair : nums_map) {
            v.push_back({pair.second, pair.first});
        }
        sort(v.begin(), v.end());
        vector<int> result;
        int i = v.size()-1;
        while (k--) {
            result.push_back(v[i--].second);
        } 
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}