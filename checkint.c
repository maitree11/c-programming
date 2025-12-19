//WAP to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main () {

int a;
printf("enter an integer: ");
scanf("%d", &a);
  
if (a>=0) {
   if (a==0) {
      printf("number is zero\n");
   } else {  
     printf("number is positive\n");
   }  
} else {
  printf("number is negative\n");
}

return 0;
}