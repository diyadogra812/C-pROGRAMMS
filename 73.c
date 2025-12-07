#include <stdio.h>

int main() {
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if adult
    if(age >= 18) {
        printf("You are an adult.\n");

        // Check voting eligibility
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not an adult.\n");
        printf("You are not eligible to vote.\n");
    }

    return 0;
}