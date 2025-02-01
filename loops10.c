//sum of first and last digit of a number
#include<stdio.h>
int main(){
	 int n,reverse=0;
	printf("enter number:");
    scanf("%d",&n);
    int g1 = n%10;
	for (int i=n ; i>0;i=i/10){
		reverse = reverse*10 + i%10 ;
	}
	int g2  = reverse%10;
	int sum = g1 + g2;
	printf("sum is %d",sum);
	return 0;
	
}
 
