#include<stdio.h>
int main()
{
int main() {
char ch;
printf("Enter a letter: ");
scanf(" %c", &ch); 
char upper_ch = toupper(ch); 
switch (upper_ch) {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
 printf("%c is a vowel.\n", ch);
 break;
 default:
            
 if ((upper_ch >= 'A' && upper_ch <= 'Z')) {
 printf("%c is a consonant.\n", ch);
 }
  else {
 printf("%c is not an alphabet.\n", ch);
}
 break;
    }