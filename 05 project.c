#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;
	char str[100];
	
	//string
	printf("string:");
	//scanf("%s");
	
	
	while( (c=getchar()) !='\n')
	{
		if('0'<=c&&'9'>=c)
		{
			num++;
		}
		
	}
	
	
	printf("the unber of digits are %d", num);
	
	return 0;
}
