 #include<stdio.h>
int main(){
	int i,j;
	char c = ' ',h='*';
	for(i=1;i<=5;i++){
		for(int k =5;k >i;k--){
			printf("%c",h);
		}
		for(j=0;j <i;j++){
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
