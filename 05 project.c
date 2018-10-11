#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int answer=7;
	int num=0;
	
	
	do
	{
		printf("guess the number");
		scanf("%d",&i);
		
		if(i<answer)
		{
		   printf("low! \n");
		   num++;
		}
		
		else if (i>answer)
		{
			printf("high! \n");
			num++;
		}
		else
		{
			printf("Á¤´ä!!\n");
		}
		
	
	}
	while (i!=answer);
	
	printf("trial : %i\n",num);
    
    
	return 0;
}
