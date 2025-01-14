#include<stdio.h>
int main(){
	int a,b,c,d,result;
    printf("enter four numbers");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    result =(a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):c));
	printf("the greatest number is %d \n",result);
	return 0;
	
	}
