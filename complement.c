//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    int n, digit, place = 1, complement = 0;
    printf("enter the number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;          // extract last digit

        if (digit == 0)
            complement = complement + 1 * place;   // flip 0 to 1
        else
            complement = complement + 0 * place;   // flip 1 to 0

        place = place * 10;             // move to next place
        n /= 10;                 // remove last digit
    }

    printf("%d", complement);

    return 0;
}                               // c does not print leading 0s in int so the output may not be desired
