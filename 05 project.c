#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a;//절대값을 저장하는 변 
	
	
	printf("input an integer: " );
	
	scanf("%d",&i);
	
	if(i>0 )
	{

		a=i;
	}
	
	else
	{
		a=-i;
		
	}
	printf("절대값은 %i입니다.",a);	
	

	
	return 0;
}
