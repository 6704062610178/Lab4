#include<stdio.h>
int main(){
	int score,a,o,i;
	o = 1;
	while(o = 1){
		scanf("%d",&score);
		if( score == -1){
			break;
		}
		else if(score >= 68){
			if(score >=85){
				printf("%d(A)\n",score);
			}
			else if(score >=75){
				printf("%d(B)\n",score);
			}
			else if(score>=68){
				printf("%d(C)\n",score);
			}
		}
		else{
			if(score >=55){
				printf("&d(D)\n",score);
			}
			else if(score<55){
				printf("%d(F)\n",score);
			}
			
		}	
	}
	
}
