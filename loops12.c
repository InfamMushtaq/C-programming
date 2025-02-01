//product of digits of a number
#include<stdio.h>
int main(){
 int mul=1,n,i;
 printf("enter a number:");
 scanf("%d",&n);
 for (i=n;i>0;i=i/10){
 	mul = mul*(i%10);
 }
 printf("product is %d",mul);
 return 0;
}
 
