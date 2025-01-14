#include<stdio.h>
void sq(int n);
int main(){
	int number = 4;
	sq(number);
	printf("number is : %d",number);
	return 0;
}
void sq(int n ){
	
	n=n*n;
	printf("square is %d",n);
}
