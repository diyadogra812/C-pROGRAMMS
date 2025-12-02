#include<stdio.h>
int main()
{
  int age = 19;
  printf("Enter age:");
  scanf("%d",&age);
  if(age > 18){
  printf("adult\n");
  printf("they can vote\n");
  printf("they can drive\n");           //if else statement
  }
  else {
    printf("not adult\n");
  }
  return 0;
}