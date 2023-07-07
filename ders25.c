#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,satir,sutun;
	printf("Satir sayisi: ");
	scanf("%d",&satir);
	printf("Sutun sayisi: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("Deger [%d][%d]: -->",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
