#include<stdio.h>
int main(){
	int x,a,b,c,d,e ;
	printf("enter five number:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	x= a>b?(a>c?(a>d?(a>e?a:e):(d>e?d:e)):(c>d?(c>e?c:e):(d>e?d:e))):(b>c?(b>d?(b>e?b:e):(d>e?d:e)):(c>d?(c>e?c:e):(d>e?d:e)));
	printf("greatest number is %d",x);
     
	return 0;
	
}
