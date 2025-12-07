#include <stdio.h>

int main() {
    auto int x = 10;   // explicitly auto (optional)
    int y = 20;        // default auto (implicit)

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Demonstrating scope
    for(int i = 0; i < 3; i++) {
        auto int z = i + 5;  // auto variable inside loop
        printf("z = %d\n", z);
    }

    return 0;
}