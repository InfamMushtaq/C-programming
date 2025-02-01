#include<stdio.h>
void sum(int r,int s);
int main(){
	int r,s;
		printf("enter r and s:");
	scanf("%d %d",&r,&s);
	sum(r,s);
	return 0;
}
void sum(int r, int s){
	 
	int d=r +s;
	printf("sum is %d",d);
}
