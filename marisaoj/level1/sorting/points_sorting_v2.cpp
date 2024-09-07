// haolamnm
// 250ms

#include <bits/stdc++.h>
using namespace std;

struct Point {
    unsigned x, y, z;
};

bool cmp(const Point &a, Point const &b) {
    if (a.x != b.x) return a.x < b.x;
    if (a.y != b.y) return a.y < b.y;
    return a.z < b.z;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<Point> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i].x >> A[i].y >> A[i].z;
    }
    sort(A.begin(), A.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << A[i].x << ' ' << A[i].y << ' ' << A[i].z << endl;
    }
    return 0;
}