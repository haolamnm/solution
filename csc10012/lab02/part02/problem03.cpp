#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long fac = 1, sum = 1;
    for (int i = 2; i <= n; i++) {
        fac = fac * i;
        sum += fac;
    }
    cout << sum;

    return 0;
}