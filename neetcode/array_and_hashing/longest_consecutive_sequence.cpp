// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution { // Time O(N), Space O(N);
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int n : numSet) { // avoid sorting Time O(N.logN);
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                while (numSet.find(n + length) != numSet.end()) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}