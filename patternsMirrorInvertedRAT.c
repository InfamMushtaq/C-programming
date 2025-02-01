#include<stdio.h>
int main(){
	int i,j;
	char c = ' ',h='*';
	for(i=1;i<=5;i++){
		for(int k =0;k<=i;k++){
			printf("%c",c);
		}
		for(j=5;j>=i;j--){
			printf("%c",h);
		}
		printf("\n");
	}
	return 0;
}
