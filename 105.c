#include <stdio.h>
int main() {
    int n, i = 1;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) printf("Factorial not defined for negative numbers.\n");
    else {
        while(i <= n) {
            fact *= i;
            i++;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}
