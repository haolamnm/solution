// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int arr[3];
    for (int i=0; i<3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] == arr[1]) {
        cout << arr[2];
    } else {
        cout << arr[0];
    }
 
    return 0;
}