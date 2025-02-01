//sum of digits of a number
#include<stdio.h>
int main(){
	 int n,sum=0;
	printf("enter number:");
    scanf("%d",&n);
	for (int i=n ; i>0;i=i/10){
		sum+=i%10;
	}
	 printf("sum is %d",sum);
	return 0;
}
 
