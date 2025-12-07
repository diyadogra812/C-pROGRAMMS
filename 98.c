#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int len = strlen(str), flag = 1;
    for(int i = 0; i < len / 2; i++)
        if(str[i] != str[len - 1 - i])
            flag = 0;

    if(flag) printf("Palindrome\n");
    else printf("Not a palindrome\n");

    return 0;
}
