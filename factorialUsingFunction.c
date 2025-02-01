#include<stdio.h>
int fac(int n);
int main (){
	int number;
	 printf("enter a number: ");
	 scanf("%d",&number);
	printf("factorial of number is : %d",  fac(number));
	return 0;
	
}
int fac(int n){
	if(n==1||n==0)
	return 1;
	return n*fac(n-1);
}
