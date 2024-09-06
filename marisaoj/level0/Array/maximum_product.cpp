// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    int A[N], B[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
        B[i] = A[i];
    }
    int max = *max_element(A, A+N);
    int maxIndex = distance(A, find(A, A+N, max));
    int min = *min_element(A, A+N);
    int minIndex = distance(A, find(A, A+N, min));
    for (int i=0; i<N; i++) {
        int n = max - A[i];
        int m = B[i] - min;
        if (i == maxIndex) A[i] = max - min;
        else A[i] = n;
        if (i == minIndex) B[i] = max - min;
        else B[i] = m;
    }
    int n_max = max - *min_element(A, A+N);
    int n_min = min + *min_element(B, B+N);
    
    if (min*n_min >= max*n_max) {
        cout << min*n_min;
    } else cout << max*n_max;
 
    return 0;
}