#include<stdio.h>
int main()
{
    float principle,rate,time,c,interest;
    printf("enter principle");
    scanf("%f",&principle);
    printf("enter rate");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    printf("enter c");
    scanf("%f",&c);
    interest = principle * rate * time * c;
    printf("interest of %f and %f and %f and %f is %f\n", principle, rate, time, c, interest);
    return 0;

}