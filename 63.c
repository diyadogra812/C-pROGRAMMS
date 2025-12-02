#include<stdio.h>
int main() {
  int outer_choice;
  int inner_choice;
printf("Enter your outer choice (1 for Category A, 2 for Category B): ");
scanf("%d", &outer_choice);

switch (outer_choice) {
  case 1:
     printf("You selected Category A.\n");
     printf("Enter your inner choice for Category A (12 for Option a, 5 for Option b): ");
     scanf("%d", &inner_choice);
switch (inner_choice) {      
}
 break;
   case 2:
     printf("You selected Category B.\n");
     printf("Enter your inner choice for Category B (15 for Option g, 8 for Option h): ");
     scanf("%d", &inner_choice);
switch (inner_choice) {
    case 15:
   printf("You selected Option g within Category B.\n");
 break;
    case 8:
    printf("You selected Option h within Category B.\n");
  break;
  default:
   printf("Invalid inner choice for Category B.\n");
   }
 break;
 default:
 printf("Invalid outer choice.\n");
    }
return 0;
  }