// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {

int n;
int product = 1;    
int i;              

printf("enter the number for product (n): ");
scanf("%d", &n);

if (n <= 2) {
printf("no even numbers between 1 and 2.\n");
printf("the product is: 1\n");
return 0;
}

for (i = 2; i <= n; i += 2) { 
product = product * i;
}

printf("The product of even numbers between 1 and  %d is: %d\n", n, product);

return 0;
}