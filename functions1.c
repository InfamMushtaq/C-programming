#include<stdio.h>
int product(int a,int b, int c);
int main(){
	int a,b,c;
	printf("enter r,s and t:");
	scanf("%d %d %d",&a,&b,&c);
	int d=product(a,b,c);
	printf("product is %d",d);
	return 0;
}
int product(int a, int b, int c){
	return a*b*c;
}
