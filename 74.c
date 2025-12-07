#include <stdio.h>

void demoAuto() {
    auto int x = 0;   // auto local variable
    x++;
    printf("Inside demoAuto: x = %d\n", x);
}

int main() {
    demoAuto();
    demoAuto();
    demoAuto();
    return 0;
}