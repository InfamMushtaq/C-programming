#include<stdio.h>
int main(){
	int max,num1,num2,num3,num4 ;
	printf("enter four numbers:");
	scanf("%d %d %d %d ",&num1,&num2,&num3,&num4);
    max = (num1 > num2) ? num1 : num2;
    max = (num3 > max) ? num3 : max;
    max = (num4 > max) ? num4 : max;
	printf("greatest number is %d",max);
	return 0;
}
