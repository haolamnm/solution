// haolamnm

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    float T;
    cin >> T;
    if (T >= 9.0) {
        cout << "VERY TOXIC";
    } else if (T >= 5.0) {
        cout << "TOXIC";
    } else {
        cout << "SAFE";
    }
 
    return 0;
}