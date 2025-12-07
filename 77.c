#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet.\n", ch);

        // Check if it is uppercase
        if (ch >= 'A' && ch <= 'Z') {
            printf("It is an uppercase letter.\n");
        } else {
            printf("It is a lowercase letter.\n");
        }
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
