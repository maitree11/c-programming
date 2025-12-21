// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>
int main() {

int days;
float fine;
printf("number of days late: ");
scanf("%d", &days);

if (days > 0 && days <= 5) {
  fine = days * 2;
  printf("fine is ₹%.2f\n", fine);
} else if (days > 5 && days <= 10) {
  fine = (5 * 2) + ((days-5) * 4);
  printf("fine is ₹%.2f\n", fine);
} else if (days > 10 && days <= 30) {
  fine = (5 * 2) + (5 * 4) + ((days-10) * 6);
  printf("fine is ₹%.2f\n", fine);
} else if (days > 30) {
  printf("membership cancelled");
} else { 
  printf("no fine");
} 

return 0;
}