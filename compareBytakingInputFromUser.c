#include<stdio.h>
int main(){
	int num1,num2,compare;
	printf("enter first no :");
	scanf("%d",&num1);
	printf("enter sencond no :");
	scanf("%d",&num2);
	 if( num1 > num2){
		compare = num1;
	 }else compare = num2;
	printf("%d is greater  \n", compare);
	return 0;




}
