

// haolamnm

#include <bits/stdc++.h>
using namespace std;

float x = 16777217;

int main() {
    float inf = 1.0f/0.0f;         // Infinity
    float nan = 0.0f/0.0f;         // NaN
    float tiny = 1.0e-45f;         // Might be denormalized

    printf("Inf: %f\n", inf);      // Prints "inf"
    printf("NaN: %f\n", nan);      // Prints "nan"
    printf("Tiny: %.45f\n", tiny); // Very small number
    
    return 0;
}