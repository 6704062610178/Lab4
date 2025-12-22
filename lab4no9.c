#include<stdio.h>
int main(){
	int score,o,i;
	int a,b,c,d,f;
	o = 1;
	while(o = 1){
		scanf("%d",&score);
		if( score == -1){
			printf("A(%d)\n",a);
			printf("B(%d)\n",b);
			printf("C(%d)\n",c);
			printf("D(%d)\n",d);
			printf("F(%d)",f);
			break;
		}
		else if(score >= 68){
			if(score >=85){
				printf("%d(A)\n",score);
				a = a+1;
			}
			else if(score >=75){
				printf("%d(B)\n",score);
				b = b+1;
			}
			else if(score>=68){
				printf("%d(C)\n",score);
				c = c+1;
			}
		}
		else{
			if(score >=55){
				printf("%d(D)\n",score);
				d = d+1;
			}
			else if(score<55){
				printf("%d(F)\n",score);
				f = f+1;
			}
			
		}	
	}
	
}
