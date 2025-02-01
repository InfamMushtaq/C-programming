//to check a number is palindrome or not
#include<stdio.h>
int main(){
 int reverse=0,n,i;
 printf("enter a number:");
 scanf("%d",&n);
 for (i=n;i>0;i=i/10){
 	reverse = reverse*10 + i%10;
 }
 if(n==reverse){
 printf("number is palindrome and is %d",n);
}
else{
	printf("number is not palindrome");
}
 return 0;
}
 
