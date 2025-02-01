//n digit number
#include<stdio.h>
int main(){
	 int n,count=0;
	printf("enter number:");
    scanf("%d",&n);
	for (int i=n ; i>0;){
		i =i/10;
		count++;
	}
	printf("number is %d digit number",count);
	return 0;
	
}
 
