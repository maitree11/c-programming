//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main() {
   
char chr;
printf("enter a character: ");
scanf("%c", &chr);
   
if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
   printf("%c is a vowel\n", chr);
} else {
   printf("%c is a consonant\n", chr);
}
   
return 0;
}