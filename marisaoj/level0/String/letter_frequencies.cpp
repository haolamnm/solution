// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string S;
    unsigned int A[26];
    memset(A, 0, sizeof(A));
    getline(cin , S);
    for (int i=0,j=0; i<26; i++) {
        if (j == S.length()) break;
        if ((int)S[j]>123 || (int)S[j]<97) {
            j++;
            i=-1;
        } else if (S[j] == 'a' + i) {
            j++;
            A[i]++;
            i=-1;
        }
    }
    for (int i=0; i<26; i++) {
        cout << A[i] << " ";
    }
 
    return 0;
}