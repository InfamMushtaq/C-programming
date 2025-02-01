#include<stdio.h>
int main(){
	int j,i;
	char ch='*';
	for (i=1;i<=5;i++){
		for (j=0;j<i;j++)
		printf("%c",ch);
		printf("\n");
	}
	return 0;	
}
