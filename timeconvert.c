//WAP to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main () {

    int t;

    printf("enter time in seconds: ");
    scanf("%d", &t);

    int h, m, s;
    h = t / 3600;
    m = t % 60;
    s = t % 60;

    printf("hours : minute : seconds is %d : %d : %d \n" , h, m, s);

    return 0;

}