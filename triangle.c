//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
#include <math.h>
int main() {        

float a, b, c;
printf("enter three sides of the triangle: ");
scanf("%f %f %f", &a, &b, &c);

if (a==b && b==c && c==a) {                            // for equilateral
   printf("the triangle is equilateral\n");
} else if (a==b || b==c || c==a) {                     // for isosceles
   printf("the triangle is isosceles\n");
} else {                                               // for scalene
   printf("the triangle is scalene\n");
}

return 0;
}