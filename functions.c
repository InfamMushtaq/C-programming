#include<stdio.h>
int mul();
int main(){
	int answer;
	answer =mul();
	printf("%d",answer);
	return 0;
}
int mul(){
	int a=2,b=4 ,result;
	result=a*b;
	return result;
	
}
