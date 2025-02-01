#include<stdio.h>
int main(){
int num1,num2,sum,prod;
printf("enter first integer:");
scanf("%d",&num1);
printf("enter second integer:");
scanf("%d",&num2);
sum = num1 + num2;
prod = num1 * num2;
printf("sum and product of %d and %d is %d and %d\n", num1, num2, prod, sum);
return 0;
}