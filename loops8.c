//n to 1 counting
#include<stdio.h>
int main(){
	int n;
	printf("enter a given number:");
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		printf("%d\n",i);
	}
	return 0;
}
