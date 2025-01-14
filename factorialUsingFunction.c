#include<stdio.h>
int fac(int *n);
int main (){
	int number = 3;
	fac(&number);
	printf("factorial of number is : %d",&number);
	return 0;
	
}
int fac(int *n){
	int factorial;
	if(*n==1||*n==0)
	return 1;
	*n=(*n)*(*n-1);
	return *n;
}
