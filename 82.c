#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    // Pre-increment: increments first, then uses the value
    printf("Pre-increment (++a): %d\n", ++a); // a becomes 6, then prints 6

    // Post-increment: uses the value first, then increments
    printf("Post-increment (b++): %d\n", b++); // prints 5, then b becomes 6

    printf("Values after increment: a = %d, b = %d\n", a, b);

    return 0;
}
