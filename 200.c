#include <stdio.h>
#include <string.h>
int main() {
    char str[200]; printf("Enter a string: "); scanf(" %[^\n]",str);
    int count=0;
    for(int i=0;i<strlen(str);i++) if(str[i]==' ' && str[i+1]!=' ') count++;
    printf("Number of words = %d\n", count+1);
    return 0;
}
