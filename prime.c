//Q34: Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n<=1) {
        printf("the number is not prime.");
        return 0;
    }
    
    for (i=2; i <= n/2; i++) {
        if (n % i == 0) {
            printf("the number is not prime.");
        } else {
            printf("the number is prime.");
        }
        return 0;
    }
    return 0;
}