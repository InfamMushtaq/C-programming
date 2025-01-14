#include<stdio.h>
int main(){
     int n;
       printf("enter a number: ");
     scanf("%d",&n);
    if(n%2 ==0){
        printf("%d is even \n",n);
    } else if (n%2!=0)printf("%d is odd \n",n);
    else printf("invalid number \n",n);
   
      
    return 0;
}
