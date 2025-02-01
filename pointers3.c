#include<stdio.h>
void dd(int a, int b, int *sum, int *avg , int *prod);
int main(){
	int a=3 , b=5;
	int sum,avg,prod;
	dd(a,b,&sum,&avg,&prod);
		printf("sum,average and product of numbers are %d ,%d and %d respectively",sum,avg,prod);
	return 0;
}
void dd(int a ,int b , int* sum,int* avg,int* prod){
	*sum=a+b;
	*avg=(a+b)/2;
	*prod=a*b;
	 
}
