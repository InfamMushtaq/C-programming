//to print table of a given  number
#include<stdio.h>
int main(){
	int n,mul=1;
	printf("enter a given number:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
