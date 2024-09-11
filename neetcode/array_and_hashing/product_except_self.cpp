// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution { // Time O(N);
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n+2, 1);
        vector<int> postfix(n+2, 1);

        for (int i = 1; i <= n; i++) {
            prefix[i] = nums[i-1] * prefix[i-1];
        }
        for (int i = n; i >= 1; i--) {
            postfix[i] = nums[i-1] * postfix[i+1];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = prefix[i] * postfix[i+2];
        }
        return nums;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}