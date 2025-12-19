//WAP to swap two numbers without using a third variable.

#include <stdio.h>
int main () {

int a, b;

printf("enter a: ");
scanf("%d", &a);

printf("enter b: ");
scanf("%d", &b);
  
printf("initially a = %d, b = %d\n", a, b);

a = a + b;
b = a - b;
a = a - b;
  
printf("now a = %d, b = %d\n", a, b);

return 0;
}
