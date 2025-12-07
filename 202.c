#include <stdio.h>

int main() {
    int a, b;
    int *p = &a, *q = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p, q);

    if (*p > *q)
        printf("%d is largest\n", *p);
    else
        printf("%d is largest\n", *q);

    return 0;
}
