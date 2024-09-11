// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while (l < r) {
            while (numbers[l] + numbers[r] > target && l < r) {
                r--;
            }
            while (numbers[l] + numbers[r] < target && l < r) {
                l++;
            }
            if (numbers[l] + numbers[r] == target) {
                return {l+1, r+1};
            }
        }
        return {};
    }
};
// O(1) space = no unordered_map

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}