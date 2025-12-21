//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    int a, b, i, hcf;           //using formula a*b = lcm*hcf
    printf("enter num1: ");
    scanf("%d", &a);
    printf("enter num2: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    
    int lcm = (a * b) / hcf;

    printf("LCM is %d", lcm);
    return 0;
}