// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    int max = *max_element(A, A+N);
    int min = *min_element(A, A+N);
    for (int i=0; i<N; i++) {
        int n = max - A[i];
        if (n == 0) A[i] = max - min;
        else A[i] = n;
    }
    cout << max - *min_element(A, A+N);
 
    return 0;
}