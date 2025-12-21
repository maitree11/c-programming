//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum = sum + (n % 10);   // add sum to the last digit and then remove the last digit till 0 remains
        n = n / 10;           // last digit removed because it becomes a float value and int cannot read that
    }
    
    printf("sum of digits is %d", sum);
    return 0;
}