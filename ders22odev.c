#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Yýldýzlarla eþkenar üçgen oluþturma
	
	int i,j,kenar;
	
	printf("Eskenar ucgenin kenar uzunlugunu giriniz:");
	scanf("%d",&kenar);
	
	for(i=1;i<=kenar;i++)
	{
		for(j=kenar-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
