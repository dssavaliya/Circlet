#include<stdio.h>
int main(){
	
	int i,j,a=4,b=4;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;k++)
	    {
			if(k==a || k==b){
				
				printf("*");
			}
			else{
				
				printf(" ");
			}
		}
		
		a++;
		b--;
		
	 printf("\n");
	}
	
	
	return 0;
}

