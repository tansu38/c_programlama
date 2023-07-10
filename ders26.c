#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int m1[2][2]={1,2,3,4};
	int m2[2][2]={1,2,3,4};
	
	int toplam[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam[i][j]=m1[i][j]+m2[i][j];
			printf("%d ",toplam[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
