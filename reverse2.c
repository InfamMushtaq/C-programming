#include<stdio.h>
int main(){
	int a=432;
	int n1=a%10;
	 a =a/10;
	int n2=a%10;
	a = a/10;
	int n3 = a %10;
	printf("%d%d%d",n1 , n2, n3);
	return 0;
	
}
