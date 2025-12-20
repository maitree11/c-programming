//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {

int n;
int sum = 0;    // Initialize sum to 0
int i;          // Loop counter

printf("enter the number of odd numbers for sum (n): ");
scanf("%d", &n);

if (n <= 0) {
printf("Please enter a positive number.\n");
return 1;
}

for (i = 1; i <= n; i++) {
sum = sum + (2 * i - 1);
}

printf("The sum of the first %d odd numbers is: %d\n", n, sum);

return 0;
}