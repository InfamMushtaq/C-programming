#include<stdio.h>
int main(){
 int i,n,r=0;
 printf("enter a number:");
 scanf("%d",&n);
 for(i=n;i>0;i = i/10){
 	r=r*10 + i%10;
 }
 for (int j=r;j>0;j=j/10){
 	 switch(j%10){
 	 	case 0:
 	 		printf(" zero ");
 	 		break;
 	 		case 1:
 	 		printf(" one ");
 	 		break;
 	 		case 2:
 	 			printf(" two ");
 	 			break;
 	 			case 3:
 	 				printf(" three ");
 	 				break;
 	 			case 4:
 	 				printf(" four ");
 	 				break;
 	 				case 5:
 	 					printf(" five ");
 	 					break;
 	 					case 6:
 	 						printf(" six ");
 	 						break;
 	 						case 7:
 	 							printf(" seven ");
 	 							break;
 	 							case 8:
 	 								printf(" eight");
 	 								break;
 	 								case 9:
 	 									printf(" nine");
 	 									break;
 	 									default:
 	 										printf(" error ");
 	 									}		
	  }
 return 0;
}
 
