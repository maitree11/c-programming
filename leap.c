//WAP to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
 
int y;
printf("enter a year: ");
scanf("%d", &y);

if (y%400 == 0){
   printf("%d is a leap year\n", y);
} else if (y%100 == 0) {
   printf("%d is NOT a leap year\n", y);
} else if (y%4 == 0) {
   printf("%d is a leap year\n", y);
} else {
   printf("%d is NOT a leap year\n", y);
}
return 0;
}