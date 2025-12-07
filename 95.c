#include <stdio.h>

int main() {
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Calculate GCD using Euclidean method
    int x = a, y = b;
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // Calculate LCM using formula: LCM * GCD = a * b
    lcm = (a * b) / gcd;

    printf("GCD of %d and %d = %d\n", a, b, gcd);
    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
