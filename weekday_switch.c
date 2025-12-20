//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main() {

int num;
printf("enter a number between 1 and 7 to find the day of the week: ");
scanf("%d", &num);

switch (num) {
case 1:
  printf("It's Monday\n");
  break;
case 2: 
  printf("It's Tuesday\n");
  break;
case 3: 
  printf("It's Wednesday\n");
  break;
case 4: 
  printf("It's Thursday\n");
  break;
case 5: 
  printf("It's Friday\n");
  break;
case 6: 
  printf("It's Saturday\n");
  break;
case 7: 
  printf("It's Sunday\n");
  break;
default:
  printf("invalid, please enter a number between 1 and 7");
  break;
}
 
return 0;
}