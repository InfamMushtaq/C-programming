#include<stdio.h>
int main(){
	int i,reverse = 0,n;
	printf("enter a number:");
	scanf("%d",&n);
	for (i =n;i>0;i=i/10){
		reverse = reverse*10 + i%10;
	}
	printf("reverse is %d",reverse);
	return 0;
}
