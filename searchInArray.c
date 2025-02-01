#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("enter numbers in an array: ");
 for (i=0;i<5;i++){
	scanf("%d",&a[i]);
 }
 printf("enter number to search: ");
 scanf("%d",&n);
 int k=0;
while( k<5){
 	if(a[k]==n){
 	printf("number is found");
	return 0 ;
}
	k++;
		 }
		 printf("not found");
 return 0;
}
 

