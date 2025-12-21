//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    int n1, n2;
    int i;
    int hcf;

    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    for (i=1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
        hcf = i;
        }
    }
printf("HCF is %d", hcf);
return 0;
}