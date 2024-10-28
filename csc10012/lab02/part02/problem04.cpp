#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = 2;
    int sum = n + 1;

    cout << 1 << " ";
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum += i;
            k++;
            if (n / i != i) {
                cout << n / i << " ";
                sum += n / i;
                k++;
            }
        }
    }
    cout << n << "\n";
    cout << "Sum of all these divisors: " << sum << "\n";
    cout << "The number of divisors: " << k << "\n";

    return 0;
}