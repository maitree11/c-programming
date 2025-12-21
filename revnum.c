// Q30: Write a program to reverse a given number.

#include <stdio.h>
int main () {
    
int num, rev=0;
    
printf("enter a number: ");
scanf("%d", &num);
    
int rem = num;
  for(; num > 0 ;){
   rev = rev * 10 + num % 10;
   num = num / 10;
}    
    
printf("reversed number of %d is %d \n", rem , rev);
    
return 0;
}