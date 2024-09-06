// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, temp=1;
    cin >> n;
    long long int A[n]={0};
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    long long int max = A[0];
    for (int i=1; i<n; i++) {
        if (max < A[i]) {
            max = A[i];
            temp = i+1;
        }
    }
    cout << max << " " << temp;
 
    return 0;
}