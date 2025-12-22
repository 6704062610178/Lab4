#include<stdio.h>
int main(){
	int i,j,h,s;
	char c;
	scanf("%s %d %d",&c,&h,&s);
	for(i=0;i<s;i++){
		for(j=0;j<h;j++){
			printf("%c",c);
		}
		printf("\n");
	}
}
