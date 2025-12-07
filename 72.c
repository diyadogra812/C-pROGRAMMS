#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    // Set correct credentials
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    // Input from user
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Check credentials
    if(strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}