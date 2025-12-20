//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {

char op;        //operator
int a, b;

printf("enter first number: ");
scanf ("%d", &a) ;

printf("enter operator (+,-.*,/,%%) : ");
scanf(" %c", &op);

printf("enter second number: ");
scanf ("%d", &b) ;

int sum, diff, product, remainder; 
float quotient;
switch (op) {
case '+':
    sum = a + b;
    printf ("ans = %d", sum) ;
    break;
case '-':
    diff = a - b;
    printf ("ans = %d", diff);
    break;
case '*':
    product = a * b;
    printf ("ans = %d", product);
    break;
case '/':
    if (b != 0) {
    quotient = (float)a / b;
    printf( "ans = %.2f", quotient);
    } else {
      printf("division by 0 is undefined");
      break;
    }
case '%' :
     if (b != 0) {
    remainder = a % b;
    printf ("ans = %d", remainder);
    } else {
      printf ("division by 0 is undefined");
    break;
    }

default:
printf( "invalid operator");
}

return 0;
}