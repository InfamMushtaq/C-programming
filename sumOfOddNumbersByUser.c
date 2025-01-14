#include<stdio.h>
#include<math.h>
	   int main(){
	   	   int i, number,sum=0;
	   	   for ( i= 0; i<5;i++){
	   	   	printf("enter a number");
	   	   		scanf("%d",&number);
	   	   		if ( number%2!=0){
	   	   			sum += number;
					  }
			  }
	   	 printf("sum of odd numbers is %d",sum);
	   	 
	   
     
	return 0;
	
}
