// haolamnm

#include <bits/stdc++.h>
using namespace std;

int n;

int getDigit(int k, int idx) {
    string kstr = to_string(k);
    if (idx >= kstr.length()) {
        return 9;
    }
    return kstr[idx] - '0';
}

void countingSort(vector<int> &arr, int idx, int mx) {
    vector<int> res(n);
    vector<int> cnt(10, 0);

    for (int i = 0; i < n; i++) {
        int d = getDigit(arr[i], idx);
        cnt[d]++;
    }

    for (int i = 1; i < 10; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int d = getDigit(arr[i], idx);
        res[--cnt[d]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = res[i];
    }
}

void MSDradixSort(vector<int> &arr) {
    int mx = 0;
    for (int num : arr) {
        mx = max(mx, (int)to_string(num).length());
    }

    for (int idx = 0; idx < mx; idx++) {
        countingSort(arr, idx, mx);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    MSDradixSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    string res = "";
    for (int i = n - 1; i >= 0; i--) {
        res += to_string(arr[i]);
    }
    cout << res;

    
    return 0;
}