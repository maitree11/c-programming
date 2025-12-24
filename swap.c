//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int n, first, last, temp, place = 1;
    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;      // Get last digit

    // Find first digit and place value
    while (temp >= 10) {
        temp /= 10;
        place *= 10;
    }
    first = temp;          // First digit stored

    // Remove first and last digit from original number
    int middle = n % place;        // removes first digit
    middle = middle / 10;          // removes last digit

    // Assemble the new number
    int swapped = last * place + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
