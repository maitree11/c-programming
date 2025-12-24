//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int n;
    int product = 1;
    int lastdigit;

    printf("enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        lastdigit = n % 10;        // extract last digit and store it in a variable

        if (lastdigit % 2 != 0) {  // check if the last digit is odd
            product = product * lastdigit;      // multiply product with this digit
        }

        n = n / 10;       // when this is done, remove last digit. Loop continues till the last digit becomes 0
    }                     // the loop runs and last digits are successively multiplied to the existing product

    printf("%d", product);
    return 0;

}