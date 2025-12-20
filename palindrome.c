//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
  int n, temp, rev = 0;
  printf("enter a number: ");
  scanf("%d", &n);

  temp = n;   // store the number

  while (temp != 0) {
    rev = rev * 10 + (temp % 10);  // reverse number
    temp = temp / 10;              // remove last digit
  }

  if (rev == n) {
    printf("palindrome");
  } else {
    printf("not palindrome");
    }
return 0;
}