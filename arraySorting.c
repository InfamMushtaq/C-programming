#include<stdio.h>
int main(){
 int arr[100],i,k,z;
 printf("enter the elements of array:");
 for( i=0;i<5 ;i++ ){
 	scanf("%d",&arr[i]);
 }
 printf("before sorting array is ");
 for(int i=0;i<5;i++){
 	printf("\n%d",arr[i]);
 }
 printf("\n after sorting array is ");
 for ( i = 0;i<5;i++){
 	for (z= i +1; z<5;z++){
 		if (arr[i]>arr[z]){
 			k = arr[i];	 
 		arr[i]=arr[z];
 		arr[z]=k;
 	}
	 }
 }
 for(i=0;i<5;i++){
 	printf("\n %d",arr[i]);
 }
 return 0;
}
 
