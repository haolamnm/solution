// haolamnm

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int Area = 0;
        int maxArea = 0;
        while (l < r) {
            Area = min(heights[l], heights[r]) * (r - l);
            maxArea = max(Area, maxArea);
            if (heights[l] < heights[r]) {
                l++;
            } else if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
                r--;
            }
        }
        return maxArea;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}