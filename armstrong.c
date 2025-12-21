//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main () {
  int n;
  printf( "enter a number: ");
  scanf("%d", &n);

  int num=n;
  int Armstrong=0;
  for(; num>0; num = num / 10) {
    int digit = num%10;
    Armstrong = Armstrong + digit*digit*digit;
  }

  if (Armstrong==n) {
    printf("%d is an armstrong number", n);
  } else {
      printf("%d is not an armstrong number", n);
    }
 return 0;
}