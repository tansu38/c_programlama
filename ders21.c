#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Y�ld�zlarla �ekil olu�turma
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
		
	}	
	
	return 0;
}
