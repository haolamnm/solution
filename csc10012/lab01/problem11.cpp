#include <iostream>

using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    int h = seconds / 3600, m = (seconds % 3600) / 60, s = seconds % 60;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}