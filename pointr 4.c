#include<stdio.h>
int main(){
	char t='*',b='$';
	char *ptr=&t;
	char *pttr=&b;
	printf("%u difference %u is %u",ptr,pttr,ptr-pttr);
	return 0;
}
