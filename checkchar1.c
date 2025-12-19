//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main() {
    
char chr;
printf("Enter a character: ");
scanf("%c", &chr);
    
if (chr >= 'A' && chr <= 'Z') {
   printf("%c is an uppercase alphabet\n", chr);
} else if (chr >= 'a' && chr <= 'z') {
   printf("%c is a lowercase alphabet\n", chr);
} else if (chr >= '0' && chr <= '9') {
   printf("%c is a digit\n", chr); 
} else {
   printf("%c is a special character\n", chr);
}    
     
    return 0;
}